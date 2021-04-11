#include "ZhkuClientMain.h"
#include "ui_zhkuclientmain.h"
#include <QDebug>
#include <QMenu>
#include <QMouseEvent>
#include <QScroller>
#include <QSystemTrayIcon>

#include "CloseDialog.h"
#include "ui_closedialog.h"
#include "ImgLabel.h"
#define VERSION "0.0.1"

template<class w>
void insertWidget2ScrollView(w *to,QNetworkReply  *rep) {
    QByteArray imgRaw=rep->readAll();
    ImgLabel *curriImg= new ImgLabel();
    QPixmap px;
    if(px.loadFromData(imgRaw)){
        curriImg->setPixmap(px);
        to->insertImg(curriImg);
    }
    else{
        QMessageBox::warning(to,"图片加载错误!","图片不存在!");
    }


}

ZhkuClientMain::ZhkuClientMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZhkuClientMain)
{
    ui->setupUi(this);
    init_();
    setWindowTitle("仲恺教务网客户端-已登录");
    setWindowIcon(QIcon(":/assets/zhkuImg/logo.jpg"));
    setWindowIconText("zhku");

#if defined(Q_OS_ANDROID)
    QScroller::grabGesture(ui->scrollArea,QScroller::TouchGesture);

#else

#endif


}

ZhkuClientMain::~ZhkuClientMain()
{
    delete ui;
}

void ZhkuClientMain::init_Connection()
{
    connect(zhkuloginManager,&ZhkuLoginWidget::loginSuccessed,this,&ZhkuClientMain::loginSuccessed);
}

void ZhkuClientMain::init_()
{

    init_Connection();

    QStringList l;
    //全部 换成 动态加载


    campusOnHand=new FuncTable("掌上校园");
    studentStatus=new FuncTable("学生学籍");
    cultivationScheme=new FuncTable("培养方案");
    choiceLessons=new FuncTable("网上选课");
    curriculumArrangementTable=new FuncTable("教学安排");
    examinationArrangement=new FuncTable("考试安排");

    studentScore=new FuncTable("学生成绩");
    textbookInfo=new FuncTable("教材信息");
    teacherComment=new FuncTable("网上评教");
    otherTable=new FuncTable("其他");

    //掌上校园
    campusOnHand->setPix(":/assets/btnIcon/campus.png");
    ui->MenuLayout->addWidget(campusOnHand);
//    ui->MenuLayout->addWidget(campusOnHand->subWidget);
//    connect(curriculumArrangementTable->subWidget->v[0],&SubMenuBtn::clicked,this,&ZhkuClientMain::createCurriculumArrangement_Ui);
    //掌上校园

    //学生学籍

    ui->MenuLayout->addWidget(studentStatus);
    ui->MenuLayout->addWidget(studentStatus->subWidget);
    studentStatus->setPix(":/assets/btnIcon/student.png");
    studentStatus->addSubBtn("学籍管理规定",":/assets/btnIcon/student.png","");
    connect(studentStatus->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    studentStatus->addSubBtn("学籍档案",":/assets/btnIcon/student.png","");
    connect(studentStatus->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    studentStatus->curBtn->addSubBtn(QStringList()<<"基本信息"<<"辅修报名"<<"辅修信息"<<"奖惩信息",":/assets/btnIcon/student.png","");
    connect(studentStatus->curBtn->subWidget->v[0],&SubMenuBtn::clicked,this,&ZhkuClientMain::createStudentBasicalInfo);
    connect(studentStatus->curBtn->subWidget->v[1],&SubMenuBtn::clicked,this,&ZhkuClientMain::createMinorRegistration);
    connect(studentStatus->curBtn->subWidget->v[2],&SubMenuBtn::clicked,this,&ZhkuClientMain::createMinorInformation);
    connect(studentStatus->curBtn->subWidget->v[3],&SubMenuBtn::clicked,this,&ZhkuClientMain::createRewardAndPunishmentInformation);

    studentStatus->subWidget->ui->verticalLayout->addWidget(studentStatus->curBtn->subWidget);

    studentStatus->addSubBtn("注册信息",":/assets/btnIcon/student.png","");
    connect(studentStatus->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    studentStatus->addSubBtn("学籍异动",":/assets/btnIcon/student.png","");
    connect(studentStatus->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    studentStatus->curBtn->addSubBtn(QStringList()<<"学业预警"<<"申请异动"<<"预计异动信息"<<"异动信息",":/assets/btnIcon/student.png","");
    connect(studentStatus->curBtn->subWidget->v[0],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(studentStatus->curBtn->subWidget->v[1],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(studentStatus->curBtn->subWidget->v[2],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(studentStatus->curBtn->subWidget->v[3],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);

    studentStatus->subWidget->ui->verticalLayout->addWidget(studentStatus->curBtn->subWidget);
    studentStatus->addSubBtn("毕业事宜",":/assets/btnIcon/student.png","");
    connect(studentStatus->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    studentStatus->curBtn->addSubBtn(QStringList()<<"毕业进展"<<"申请提前/推迟毕业"<<"毕业审核结论",":/assets/btnIcon/student.png","");
    connect(studentStatus->curBtn->subWidget->v[0],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(studentStatus->curBtn->subWidget->v[1],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(studentStatus->curBtn->subWidget->v[2],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);

    studentStatus->subWidget->ui->verticalLayout->addWidget(studentStatus->curBtn->subWidget);
    //学生学籍

    //培养方案
    ui->MenuLayout->addWidget(cultivationScheme);
    ui->MenuLayout->addWidget(cultivationScheme->subWidget);
    cultivationScheme->setPix(":/assets/btnIcon/scheme.png");
    cultivationScheme->addSubBtn(QStringList()<<"理论课程"<<"实践环节"<<"毕业学分要求",":/assets/btnIcon/scheme.png","");
    connect(cultivationScheme->subWidget->v[0],&SubMenuBtn::clicked,this,&ZhkuClientMain::createTheoryCourse);
    connect(cultivationScheme->subWidget->v[1],&SubMenuBtn::clicked,this,&ZhkuClientMain::createPraticalPart);
    connect(cultivationScheme->subWidget->v[2],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    //培养
    //网上选课
    ui->MenuLayout->addWidget(choiceLessons);
    ui->MenuLayout->addWidget(choiceLessons->subWidget);
    choiceLessons->setPix(":/assets/btnIcon/choice.png");
    choiceLessons->addSubBtn(QStringList()<<"选课管理规定"<<"预选"<<"预选结果"<<"正选"<<"正选结果"<<"补选"<<"退选"<<"被取消课程",":/assets/btnIcon/choice.png","");
    connect(choiceLessons->subWidget->v[0],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(choiceLessons->subWidget->v[1],&SubMenuBtn::clicked,this,&ZhkuClientMain::createPreChoosing);
    connect(choiceLessons->subWidget->v[2],&SubMenuBtn::clicked,this,&ZhkuClientMain::createPreChoosingResult);
    connect(choiceLessons->subWidget->v[3],&SubMenuBtn::clicked,this,&ZhkuClientMain::createChoosing);
    connect(choiceLessons->subWidget->v[4],&SubMenuBtn::clicked,this,&ZhkuClientMain::createChoosingResult);
    connect(choiceLessons->subWidget->v[5],&SubMenuBtn::clicked,this,&ZhkuClientMain::createSupplementChoosing);
    connect(choiceLessons->subWidget->v[6],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(choiceLessons->subWidget->v[7],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    //网上

    //教学安排

    ui->MenuLayout->addWidget(curriculumArrangementTable);
    curriculumArrangementTable->setPix(":/assets/btnIcon/arrange.png");
    curriculumArrangementTable->addSubBtn("教学安排表",":/assets/btnIcon/arrange.png","");
    connect(curriculumArrangementTable->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::createCurriculumArrangement_Ui);
    curriculumArrangementTable->addSubBtn("调/停课信息",":/assets/btnIcon/arrange.png","");
    connect(curriculumArrangementTable->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    //这里没写好

    ui->MenuLayout->addWidget(curriculumArrangementTable->subWidget);
    //教学安排

    //考试安排
    ui->MenuLayout->addWidget(examinationArrangement);
    examinationArrangement->setPix(":/assets/btnIcon/examination.png");
    examinationArrangement->addSubBtn("考试管理规定",":/assets/btnIcon/examination.pngg","");
        connect(examinationArrangement->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    examinationArrangement->addSubBtn("申请补考",":/assets/btnIcon/examination.png","");
        connect(examinationArrangement->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    examinationArrangement->addSubBtn("申请缓考",":/assets/btnIcon/examination.png","");
        connect(examinationArrangement->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    examinationArrangement->addSubBtn("考试安排表",":/assets/btnIcon/examination.png","");
    connect(examinationArrangement->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::createExamArr_Ui);
    examinationArrangement->addSubBtn("考试通报信息",":/assets/btnIcon/examination.png","");
    connect(examinationArrangement->curBtn,&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    ui->MenuLayout->addWidget(examinationArrangement->subWidget);
    //考试安排

    //学生成绩


    ui->MenuLayout->addWidget(studentScore);
    ui->MenuLayout->addWidget(studentScore->subWidget);
    l=QStringList()<<"成绩管理规定"<<"重修报名"<<"获准重修\n课程/环节"<<
                     "查看成绩认定记录"<<"查看成绩"<<"成绩分布"<<"等级考试报名"<<"查看等级考试成绩";

    studentScore->setPix(":/assets/btnIcon/score.png");
    studentScore->addSubBtn(l,":/assets/btnIcon/score.png","");
    connect(studentScore->subWidget->v[0],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(studentScore->subWidget->v[1],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(studentScore->subWidget->v[2],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(studentScore->subWidget->v[3],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(studentScore->subWidget->v[4],&SubMenuBtn::clicked,this,&ZhkuClientMain::createQueryScore_Ui);
    connect(studentScore->subWidget->v[5],&SubMenuBtn::clicked,this,&ZhkuClientMain::createDistributedScore_Ui);
    connect(studentScore->subWidget->v[6],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(studentScore->subWidget->v[7],&SubMenuBtn::clicked,this,&ZhkuClientMain::createRankExam_Ui);
    //学生成绩

    //教材信息
    ui->MenuLayout->addWidget(textbookInfo);
    ui->MenuLayout->addWidget(textbookInfo->subWidget);
    l=QStringList()<<"领取教材信息"<<"领取教材对账"<<"有售教材信息"<<"确认需要教材";


    textbookInfo->setPix(":/assets/btnIcon/information.png");
    textbookInfo->addSubBtn(l,":/assets/btnIcon/information.png","");
    connect(textbookInfo->subWidget->v[0],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(textbookInfo->subWidget->v[1],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(textbookInfo->subWidget->v[2],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(textbookInfo->subWidget->v[3],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    //教材信息

    //网上评教
    ui->MenuLayout->addWidget(teacherComment);
    ui->MenuLayout->addWidget(teacherComment->subWidget);
    l=QStringList()<<"质量评价管理规定"<<"提交问卷调差表"<<"提交教学评价表";
    teacherComment->setPix(":/assets/btnIcon/comment.png");
    teacherComment->addSubBtn(l,":/assets/btnIcon/comment.png","");
    connect(teacherComment->subWidget->v[0],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(teacherComment->subWidget->v[1],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(teacherComment->subWidget->v[2],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);

    //网上评教

    //其他
    ui->MenuLayout->addWidget(otherTable);
    ui->MenuLayout->addWidget(otherTable->subWidget);
    l=QStringList()<<"修改个人密码"<<"查看个人登录日志"<<"文件下载";
    otherTable->setPix(":/assets/btnIcon/other.png");
    otherTable->addSubBtn(l,":/assets/btnIcon/other.png","");
    connect(otherTable->subWidget->v[0],&SubMenuBtn::clicked,this,&ZhkuClientMain::createOtherChangeUserInfo_Ui);
    connect(otherTable->subWidget->v[1],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    connect(otherTable->subWidget->v[2],&SubMenuBtn::clicked,this,&ZhkuClientMain::create404_Ui);
    QSpacerItem *item=new QSpacerItem(30,360);
    ui->MenuLayout->addItem(item);


}

void ZhkuClientMain::initSysTaryIcon()
{
    if(sysTrayIcon==nullptr){
        sysTrayIcon = new QSystemTrayIcon(this);
        sysTrayIcon->setIcon(QIcon(":/assets/zhkuImg/logo.jpg"));//设置托盘图标的icon
        sysTrayIcon->show();//展示系统托盘图片

        QMenu *menuTray = new QMenu;
        QAction *actQuit = new QAction(tr("退出"), menuTray);
        menuTray->addAction(actQuit);
        sysTrayIcon->setContextMenu(menuTray);
        sysTrayIcon->setToolTip(tr("zhku教务客户端"));
        sysTrayIcon->showMessage("提示", QString("zhku教务客户端:version_%1").arg(VERSION),QSystemTrayIcon::Information, 10000);

        connect(sysTrayIcon,&QSystemTrayIcon::activated,[=](QSystemTrayIcon::ActivationReason reason){
            switch(reason)
            {
            case QSystemTrayIcon::Trigger://单击
            case QSystemTrayIcon::DoubleClick://双击
            {
                if (isHidden())
                {
                    show();
                }
                else
                {
                    Qt::WindowStates winStatus = Qt::WindowNoState;
                    if (windowState() & Qt::WindowMaximized)
                    {
                        winStatus = Qt::WindowMaximized;
                    }
                    setWindowState(Qt::WindowActive | winStatus);
                    activateWindow();
                    raise();

                }
                break;
            }
            default:
                break;
            }
        });
        connect(actQuit, SIGNAL(triggered()), qApp, SLOT(quit()));
    }


}


void ZhkuClientMain::closeEvent(QCloseEvent *e)
{
#if defined (Q_OS_ANDROID)

#else
    if(!closedMemery){
        e->ignore();
        CloseDialog *cd=new CloseDialog(this);
        cd->show();
        connect(cd,&CloseDialog::accepted,[=](){
            //拿到对应按钮
            closedMemery=cd->ui->memory->isChecked();
            if(cd->ui->toBottom->isChecked()){
                //隐藏后调用托盘
                hide();
                initSysTaryIcon();
            }
            else{
                qApp->quit();
            }

        });
    }
    else{
        hide();
        e->ignore();
    }
#endif
}

void ZhkuClientMain::loginSuccessed()
{
    show();
    zhkuloginManager->hide();
    getUserInfo();

}

void ZhkuClientMain::getUserInfo()
{
    userAvater=new UserAvater();
    QNetworkReply *rep=getReqReply(zhkuMainNavigatorUrl);
    connect(rep,&QNetworkReply::finished,[=](){
        QString html=strProcessor.gbk2Utf8(rep->readAll());
        QRegExp weekEx("\\d{4}年\\d{,2}月\\d{,2}日&nbsp;.{3,3}");
        html.indexOf(weekEx);
        QString weekInfo=weekEx.cap();

        QRegExp dateEx("\\d{4}-\\d{4}学年第[一二]学期&nbsp;第&nbsp;.{,}周");
        html.indexOf(dateEx);
        QString dateInfo=dateEx.cap();

        QRegExp onlineEx("\\d{1,4}&nbsp;</span>");
        html.indexOf(onlineEx);
        QString onlineInfo=onlineEx.cap();

        userAvater->setCurWeek(weekInfo.replace("&nbsp;"," "));
        userAvater->setOnline(onlineInfo.replace("&nbsp;</span>","").toInt());
        userAvater->setDate(dateInfo.replace("&nbsp;",""));
        rep->deleteLater();
    });

    rep=getReqReply(zhkuFootUrl);
    connect(rep,&QNetworkReply::finished,[=](){
        QString html=strProcessor.gbk2Utf8(rep->readAll());
        QRegExp nameEx(".{,2}：\\[\\d{,12}\\][\u4e00-\u9fa5]{,4}");
        html.indexOf(nameEx);
        QString name_id=nameEx.cap();
        zhkuName=name_id;
        userAvater->setName(name_id);
        rep->deleteLater();
    });

    ui->MenuLayout->insertWidget(0,userAvater);
}


void ZhkuClientMain::getCurriculumArrangement()
{

    QNetworkReply *curReply=getReqReply(zhkuCurriculumPreUrl);

    //这里可以指定用阻塞形式 就不用connect嵌套了
    connect(curReply,&QNetworkReply::finished,[=](){
        QString preHtml=curReply->readAll();
        //        qDebug()<<preHtml;

        QRegExp vaildationExp("[a-z0-9]{31,31}");
        preHtml.indexOf(vaildationExp);
        hiddenVaildationCode = vaildationExp.cap(0);
        hidyzmStatus=0;
        //        }
        QString randomStr="abcdefghijklmnopqrstuvwxyz1234567890";
        QString rs;

        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
        for(int i=0;i<15;i++){
            int r=qrand()%randomStr.size();
            rs+=randomStr.at(r);
        }
        QString xnxq=currArrUi->getXNXQ();
        QString md5=strProcessor.getMd5("11347"+xnxq+rs).toUpper();

        QByteArray postdata;
        postdata.append("Sel_XNXQ="+xnxq+"&");
        //rad 是类型1 2 的区分
        //rad =1 即类型
        postdata.append(QString("rad=%1&").arg(currArrUi->rad));
        //排序方式
        postdata.append(QString("px=%1&").arg(currArrUi->getCurIndex()));
        //格式2
        if(currArrUi->zc_flag){
            postdata.append(QString("zc_flag=%1&").arg(currArrUi->zc_flag));
            postdata.append(QString("zc_input=%1&").arg(currArrUi->getZC()));
        }
        postdata.append("txt_yzm=&");
        postdata.append("hidyzm="+hiddenVaildationCode+"&");
        postdata.append("hidsjyzm="+md5);
        qDebug()<<postdata;
        QString withPara=QString("?m=")+rs;
        qDebug()<<zhkuCurriculumUrl.url()+withPara;


        QNetworkReply *curriReply=postReqReply(zhkuCurriculumUrl.url()+withPara,postdata);
        connect(curriReply,&QNetworkReply::finished,[=](){
            QString curriUrlHtml=strProcessor.gbk2Utf8(curriReply->readAll());
            //            qDebug()<<curriUrlHtml;
//            Pri_StuSel_Drawimg.aspx?type=1&w=1100&h=580&xnxq=20200
//            Pri_StuSel_Drawimg.aspx?type=1&w=1100&h=400&xnxq=20201
            QRegExp urlExp("Pri_StuSel_Drawimg.aspx\\?type=\\d{1}&w=\\d{0,4}&h=\\d{0,4}&xnxq=\\d{5}(&px=\\d{1}){0,1}");
            QString curriUrl=reFindOne(urlExp,curriUrlHtml);


            if(curriUrl.size()==0){
                QMessageBox::warning(this,"错误","未找到对应课表");
            }
            else{
                //                http://jw.zhku.edu.cn/znpk/Pri_StuSel_Drawimg.aspx?type=2&w=928&h=120&xnxq=20201&px=0
                //                http://jw.zhku.edu.cn/znpk/Pri_StuSel_Drawimg.aspx?type=2&w=928&h=120&xnxq=20201

                QNetworkReply *curriUrlReply=getReqReply(QUrl(QString("http://jw.zhku.edu.cn/znpk/")+curriUrl));
                connect(curriUrlReply,&QNetworkReply::finished,[=](){
                    QString curriPath=xnxq+"学期的课表.jpg";
                    QFile *curriculumFile=new QFile(curriPath);
                    if (!curriculumFile->open(QIODevice::WriteOnly)){
                        delete curriculumFile;
                        curriculumFile=nullptr;
                        qDebug()<<"curriculumFile文件写入失败!";

                    }
                    else{
                        QByteArray imgRaw=curriUrlReply->readAll();
                        curriculumFile->write(imgRaw);
                    }
                    curriculumFile->close();
                    curriUrlReply->deleteLater();
                    curriReply->deleteLater();
                    curReply->deleteLater();

                    //将 图片输出到 那个地方
                    ImgLabel *curriImg= new ImgLabel();
                    curriImg->setPixmap(QPixmap(curriPath));
                    currArrUi->insertImg(curriImg);

                });
            }
        });

    });


}

void ZhkuClientMain::getStudentScore()
{
    QByteArray postdata;
    //原始成绩start SJ=0
    //    SelXNXQ
    //这个参数 决定了 打印的类型
    //    0代表 入学以来
    //    1代表学年
    //    2代表学期

    //    sel_xq代表学期,选择 SELXNXQ=1 后 也就是选择学年查询 这个参数会消失
    // sel_xn 代表学年

    //选择入学以来那么没有 sel_xq _xn

    //    其他参数相同

    //原始成绩end

    //SJ决定 原始成绩还是有效成绩
    //    SJ=1为有效成绩
    //    其他参数不变
    //    zfx_flag代表 主修还是辅修
    postdata.append(QString("SelXNXQ=%1&").arg(queryScoreUi->byWhat));
    if(queryScoreUi->byWhat==0){

    }
    else if(queryScoreUi->byWhat==1){
        postdata.append(QString("sel_xn=%1&").arg(queryScoreUi->getXN()));
    }
    else{
        postdata.append(QString("sel_xn=%1&").arg(queryScoreUi->getXN()));
        postdata.append(QString("sel_xq=%1&").arg(queryScoreUi->getXQIndex()));
    }
    postdata.append(QString("SJ=%1&").arg(queryScoreUi->scoreType));
    //
    postdata.append(QString("btn_search=%BC%EC%CB%F7&"));
    //
    //排序方式

    postdata.append(QString("zfx_flag=%1&").arg(queryScoreUi->learnType));
    postdata.append(QString("zfx=0&"));

    //    qDebug()<<postdata;
    QNetworkReply *curReply=postReqReply(zhkuStudentScoreUrl,postdata);

    connect(curReply,&QNetworkReply::finished,[=](){
        QString curriUrlHtml=strProcessor.gbk2Utf8(curReply->readAll());
        QRegExp ex("Stu_MyScore_Drawimg.aspx\\?x=\\d{1,}&h=\\d{1,}&w=\\d{3,}&xnxq=\\d{5}&xn=\\d{0,4}&xq=\\d{0,1}&rpt=\\d&rad=\\d&zfx=\\d&xh=\\d{12}");
        //                  Stu_MyScore_Drawimg.aspx\?x= \d{1,}&h= \d{1,}&w= \d{3,}&xnxq= \d{5}&xn=&xq=&rpt= \d{1}&rad= \d{1}&zfx= \d{1}&xh= \d{12}
        QStringList list=reFindAll(ex,curriUrlHtml);

        //自动保存
        foreach (QString url, list) {
            QNetworkReply *urlReply=getReqReply(QString("http://jw.zhku.edu.cn/xscj/")+url);
            connect(urlReply,&QNetworkReply::finished,[=](){
                QByteArray imgRaw=urlReply->readAll();
                ImgLabel *curriImg= new ImgLabel();
                QPixmap px;
                if(px.loadFromData(imgRaw)){
                    curriImg->setPixmap(px);
                    queryScoreUi->insertImg(curriImg);
                }
                else{
                    QMessageBox::warning(this,"图片加载错误!","请检查错误");
                }

                urlReply->deleteLater();
            });
        }
        curReply->deleteLater();
    });
}

void ZhkuClientMain::getDistributedScore()
{

    QByteArray postdata;
    postdata.append(QString("SelXNXQ=%1&").arg(distributedScoreUi->byWhat));
    if(distributedScoreUi->byWhat==0){

    }
    else if(distributedScoreUi->byWhat==1){
        postdata.append(QString("sel_xn=%1&").arg(distributedScoreUi->getXN()));
    }
    else{
        postdata.append(QString("sel_xn=%1&").arg(distributedScoreUi->getXN()));
        postdata.append(QString("sel_xq=%1&").arg(distributedScoreUi->getXQ()));
    }
    postdata.append(QString("submit=%BC%EC%CB%F7&"));
    qDebug()<<postdata;
    QNetworkReply *curReply=postReqReply(zhkuScoreDisUrl,postdata);
    connect(curReply,&QNetworkReply::finished,[=](){
        QString html=strProcessor.gbk2Utf8(curReply->readAll());
        distributedScoreUi->setHtml(html);
        curReply->deleteLater();
    });

}

void ZhkuClientMain::getRankExam()
{
    QByteArray getPara;
    getPara.append(tr("flag=%1").arg(1/qrand()));
    QNetworkReply *curReply=getReqReply(zhkuRankExamUrl,getPara);
    connect(curReply,&QNetworkReply::finished,[=](){
        QNetworkReply *rep=getReqReply(QUrl("http://jw.zhku.edu.cn/xscj/Stu_djkscj_rpt.aspx"));
        connect(rep,&QNetworkReply::finished,[=](){
            rankExmaUi->setHtml(strProcessor.gbk2Utf8(rep->readAll()));
            rep->deleteLater();
        });
        curReply->deleteLater();
    });

}

void ZhkuClientMain::getExamArr()
{
    QByteArray ba;
    //   sel_xnxq=20200&sel_lcxz=&sel_lc=&btnsearch=%BC%EC%CB%F7
    ba+=tr("sel_xnxq=%1&").arg(examArrUi->getXnxq());
    QString lcxz;
    if(examArrUi->getlcxz()==0){

    }
    else{
        lcxz=QString::number(examArrUi->getlcxz());
    }
    ba+=tr("sel_lcxz=%1&").arg(lcxz);
    ba+=tr("sel_lc=%1&").arg(examArrUi->getlc());
    ba+=tr("btnsearch=%BC%EC%CB%F7");
    qDebug()<<ba;
    QNetworkReply *curReply=postReqReply(zhkuExamUrl,ba);
    connect(curReply,&QNetworkReply::finished,[=](){
        QString html=strProcessor.gbk2Utf8(curReply->readAll());
        QString url;
        QRegExp ex("stu_ksap_drawimg.aspx\\?w=\\d{0,4}&h=\\d{0,4}&xn=\\d{0,4}&xq=\\d{0,1}&lcdm=\\d{0,8}");
        url=reFindOne(ex,html);

        QNetworkReply *imgRep=getReqReply("http://jw.zhku.edu.cn/KSSW/"+url);
        connect(imgRep,&QNetworkReply::finished,[=](){
            insertWidget2ScrollView(examArrUi,imgRep);
            imgRep->deleteLater();
        });
        curReply->deleteLater();
    });
}

void ZhkuClientMain::getExamTurn()
{
    int idx=examArrUi->getlcxz();
    QString lcxz;
    if(idx==0){

    }
    else{
        lcxz=QString::number(idx);
    }
    QString url=tr("http://jw.zhku.edu.cn/KSSW/Private/json_liskslc.aspx?lcxz=%1&xnxq=%2").arg(lcxz).arg(examArrUi->getXnxq());
    QNetworkReply *r=getReqReply(url);
    connect(r,&QNetworkReply::finished,[=](){
        QString html=strProcessor.gbk2Utf8(r->readAll());
        qDebug()<<html;
        QRegExp ex("[\u4e00-\u9fa5]{1,20}");
        QRegExp ex2("\\d{7}");

        QStringList list=reFindAll(ex,html);
        QStringList list2=reFindAll(ex,html);
        list2.insert(0,QString());


        examArrUi->setCombo(list);
        examArrUi->setTurnCode(list2);
        r->deleteLater();
    });


}

void ZhkuClientMain::createCurriculumArrangement_Ui()
{
    removeMyUi();
    currArrUi=new CurriculumArrangement_Ui();
    ui->frameLayout->addWidget(currArrUi);
    connect(currArrUi,&CurriculumArrangement_Ui::queryCurri,this,&ZhkuClientMain::getCurriculumArrangement);

}

void ZhkuClientMain::createQueryScore_Ui()
{

    removeMyUi();
    queryScoreUi = new QueryScore_Ui();
    ui->frameLayout->addWidget(queryScoreUi);
    connect(queryScoreUi,&QueryScore_Ui::queryScore,this,&ZhkuClientMain::getStudentScore);
}

void ZhkuClientMain::createDistributedScore_Ui()
{
    removeMyUi();
    distributedScoreUi = new ScoreDistubing_Ui();
    ui->frameLayout->addWidget(distributedScoreUi);
    connect(distributedScoreUi,&ScoreDistubing_Ui::queryDis,this,&ZhkuClientMain::getDistributedScore);
}

void ZhkuClientMain::createRankExam_Ui()
{
    removeMyUi();
    rankExmaUi=new RankExam_Ui();
    ui->frameLayout->addWidget(rankExmaUi);
    getRankExam();
}

void ZhkuClientMain::createExamArr_Ui()
{
    removeMyUi();
    examArrUi=new ExamArrangement_Ui();
    ui->frameLayout->addWidget(examArrUi);
    connect(examArrUi,&ExamArrangement_Ui::queryExam,this,&ZhkuClientMain::getExamArr);
    connect(examArrUi,&ExamArrangement_Ui::currentIndexChanged,this,&ZhkuClientMain::getExamTurn);
    getExamTurn();
}

void ZhkuClientMain::create404_Ui()
{
    removeMyUi();
    closed404Ui=new Closed_404_Ui();
    ui->frameLayout->addWidget(closed404Ui);

}

void ZhkuClientMain::createOtherChangeUserInfo_Ui()
{
    removeMyUi();
    otherChangeUserInfoUi=new Other_ChangeUserInfo_Ui();
    ui->frameLayout->addWidget(otherChangeUserInfoUi);

}

void ZhkuClientMain::createDefault_Ui(QString url)
{
    removeMyUi();
    defaultUi=new Default_Ui();
    defaultUi->setHtml(url);
    ui->frameLayout->addWidget(defaultUi);
}

void ZhkuClientMain::createStudentBasicalInfo()
{
    createDefault_Ui("http://jw.zhku.edu.cn/xsxj/Stu_MyInfo_RPT.aspx");
}

void ZhkuClientMain::createMinorRegistration()
{
    createDefault_Ui("http://jw.zhku.edu.cn/xsxj/Stu_fxzy_bm_rpt.aspx");
}

void ZhkuClientMain::createMinorInformation()
{
    createDefault_Ui("http://jw.zhku.edu.cn/xsxj/Stu_fxInfo.aspx");
}

void ZhkuClientMain::createRewardAndPunishmentInformation()
{
    createDefault_Ui("http://jw.zhku.edu.cn/xsxj/Stu_xscjxx_rpt.aspx");
}

void ZhkuClientMain::createTheoryCourse()
{
    createDefault_Ui("http://jw.zhku.edu.cn/jxjh/Stu_byfakc_rpt.aspx");
}

void ZhkuClientMain::createPraticalPart()
{
    createDefault_Ui("http://jw.zhku.edu.cn/jxjh/Stu_byfahj_rpt.aspx");
}

void ZhkuClientMain::createGraduationDemanding()
{
    createDefault_Ui("http://jw.zhku.edu.cn/jxjh/Stu_byxfyq_rpt.aspx");
}

void ZhkuClientMain::createPreChoosing()
{
    createDefault_Ui("http://jw.zhku.edu.cn/wsxk/stu_xsyx.aspx");
}

void ZhkuClientMain::createPreChoosingResult()
{
    createDefault_Ui("http://jw.zhku.edu.cn/wsxk/stu_yxjg.aspx");
}

void ZhkuClientMain::createChoosing()
{
    createDefault_Ui("http://jw.zhku.edu.cn/wsxk/stu_xszx.aspx");
}

void ZhkuClientMain::createChoosingResult()
{
    removeMyUi();
    choosingUi=new ChoosingResult_Ui();
    QNetworkReply *rep=getReqReply("http://jw.zhku.edu.cn/wsxk/stu_zxjg_rpt.aspx");
    connect(rep,&QNetworkReply::finished,[=](){
        QString html=strProcessor.gbk2Utf8(rep->readAll());
        choosingUi->setHtml(html);
        ui->frameLayout->addWidget(choosingUi);
        //获取正选结果图像
//                  w=1083&h=80&xn=2020&xq=1&zfx=0&type=xzxjg
        QRegExp ex("w=\\d{3,4}&h=\\d{1,4}&xn=\\d{4}&xq=\\d{1}&zfx=\\d{1}&type=xzxjg");
        QString imgUrl;
        QString url="http://jw.zhku.edu.cn/znpk/DrawKbimg.aspx?"+reFindOne(ex,html);
        qDebug()<<url;
        QNetworkReply *imgRep=getReqReply(url);
        connect(imgRep,&QNetworkReply::finished,[=](){
            insertWidget2ScrollView(choosingUi,imgRep);
            imgRep->deleteLater();
        });

        rep->deleteLater();
    });
}

void ZhkuClientMain::createSupplementChoosing()
{



}

void ZhkuClientMain::removeMyUi()
{
    if(ui->frameLayout->count()>0){
        QLayoutItem *it=ui->frameLayout->takeAt(0);
        ui->frameLayout->removeItem(it);
        it->widget()->deleteLater();
    }

}


