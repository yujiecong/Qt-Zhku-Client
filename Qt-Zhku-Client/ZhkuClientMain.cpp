#include "ZhkuClientMain.h"
#include "ui_zhkuclientmain.h"
#include <QDebug>
#include <QMenu>
#include <QMessageBox>



ZhkuClientMain::ZhkuClientMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZhkuClientMain)
{
    ui->setupUi(this);
    init_();



}

ZhkuClientMain::~ZhkuClientMain()
{
    delete ui;
}

void ZhkuClientMain::init_()
{

    //全部 换成 动态加载

    campusOnHand=new FuncTable("掌上校园");
    studentStatus=new FuncTable("学生学籍");
    cultivationScheme=new FuncTable("培养方案");
    choiceLessons=new FuncTable("网上选课");
    curriculumArrangementTable=new FuncTable("教学安排");
    examinationRoll=new FuncTable("考试安排");
    studentScore=new FuncTable("学生成绩");
    textbookInfo=new FuncTable("教材信息");
    teacherComment=new FuncTable("网上评教");
    otherTable=new FuncTable("其他");

    //掌上校园
    campusOnHand->setPix(":/assets/btnIcon/手机.svg");
    ui->MenuLayout->addWidget(campusOnHand);
    ui->MenuLayout->addWidget(campusOnHand->subWidget);
    //掌上校园

    //学生学籍

    ui->MenuLayout->addWidget(studentStatus);
    ui->MenuLayout->addWidget(studentStatus->subWidget);
    studentStatus->setPix(":/assets/btnIcon/学生.svg");
    studentStatus->addSubBtn("学籍管理规定",":/assets/btnIcon/学生.svg","");
    studentStatus->addSubBtn("学籍档案",":/assets/btnIcon/学生.svg","");
    studentStatus->curBtn->addSubBtn(QStringList()<<"基本信息"<<"辅修报名"<<"辅修信息"<<"奖惩信息",":/assets/btnIcon/学生.svg","");
    studentStatus->subWidget->ui->verticalLayout->addWidget(studentStatus->curBtn->subWidget);

    studentStatus->addSubBtn("注册信息",":/assets/btnIcon/学生.svg","");
    studentStatus->addSubBtn("学籍异动",":/assets/btnIcon/学生.svg","");
    studentStatus->curBtn->addSubBtn(QStringList()<<"学业预警"<<"申请异动"<<"预计异动信息"<<"异动信息",":/assets/btnIcon/学生.svg","");
    studentStatus->subWidget->ui->verticalLayout->addWidget(studentStatus->curBtn->subWidget);
    studentStatus->addSubBtn("毕业事宜",":/assets/btnIcon/学生.svg","");
    studentStatus->curBtn->addSubBtn(QStringList()<<"毕业进展"<<"申请提前/推迟毕业"<<"毕业审核结论",":/assets/btnIcon/学生.svg","");
    studentStatus->subWidget->ui->verticalLayout->addWidget(studentStatus->curBtn->subWidget);
    //学生学籍
    //培养方案
    ui->MenuLayout->addWidget(cultivationScheme);
    ui->MenuLayout->addWidget(cultivationScheme->subWidget);
    cultivationScheme->setPix(":/assets/btnIcon/方案 (2).svg");
    cultivationScheme->addSubBtn(QStringList()<<"毕业学分要求"<<"实践环节"<<"理论课程",":/assets/btnIcon/档案.svg","");
    //培养
    //网上选课
    ui->MenuLayout->addWidget(choiceLessons);
    ui->MenuLayout->addWidget(choiceLessons->subWidget);
    choiceLessons->setPix(":/assets/btnIcon/选择.svg");
    choiceLessons->addSubBtn(QStringList()<<"预选"<<"选课管理规定"<<"预选结果"<<"正选"<<"正选结果"<<"补选"<<"退选"<<"被取消课程",":/assets/btnIcon/档案.svg","");

    //网上

    //教学安排

    currArrUi=new CurriculumArrangement_Ui(zhkuloginManager->getXnxq());
    ui->frameLayout->addWidget(currArrUi);
    ui->MenuLayout->addWidget(curriculumArrangementTable);
    curriculumArrangementTable->setPix(":/assets/btnIcon/安排.svg");
    curriculumArrangementTable->addSubBtn("教学安排表",":/assets/btnIcon/会议安排.svg","");
    curriculumArrangementTable->addSubBtn("调/停课信息",":/assets/btnIcon/工作安排.svg","");
    //这里没写好
    connect(curriculumArrangementTable->subWidget->v[0],&SubMenuBtn::clicked,[=](){
        ui->frameLayout->takeAt(0)->widget()->hide();
        currArrUi->show();
    });

    connect(currArrUi->ui->queryCurriculumBtn,&QPushButton::clicked,this,&ZhkuClientMain::getCurriculum);
    ui->MenuLayout->addWidget(curriculumArrangementTable->subWidget);
    //教学安排

    //考试安排
    ui->MenuLayout->addWidget(examinationRoll);
    examinationRoll->setPix(":/assets/btnIcon/考试.svg");
    examinationRoll->addSubBtn("学籍管理规定",":/assets/btnIcon/管理.svg","");
    examinationRoll->addSubBtn("学籍档案",":/assets/btnIcon/档案.svg","");
    examinationRoll->addSubBtn("注册信息",":/assets/btnIcon/信息.svg","");
    examinationRoll->addSubBtn("毕业事宜",":/assets/btnIcon/毕业.svg","");

    ui->MenuLayout->addWidget(examinationRoll->subWidget);
    //考试安排

    //学生成绩
    queryScoreUi=new QueryScore_Ui();
    ui->frameLayout->addWidget(queryScoreUi);
    ui->MenuLayout->addWidget(studentScore);
    ui->MenuLayout->addWidget(studentScore->subWidget);
    QStringList l=QStringList()<<"成绩管理规定"<<"重修报名"<<"获准重修\n课程/环节"<<
                                 "查看成绩认定记录"<<"查看成绩"<<"成绩分布"<<"等级考试报名"<<"查看等级考试成绩";

    studentScore->setPix(":/assets/btnIcon/成绩.svg");
    studentScore->addSubBtn(l,":/assets/btnIcon/成绩.svg","");
    connect(studentScore->subWidget->v[0],&SubMenuBtn::clicked,[=](){
        ui->frameLayout->takeAt(0)->widget()->hide();
        queryScoreUi->show();
    });
    //学生成绩

    //教材信息
    ui->MenuLayout->addWidget(textbookInfo);
    ui->MenuLayout->addWidget(textbookInfo->subWidget);
    l=QStringList()<<"领取教材信息"<<"领取教材对账"<<"有售教材信息"<<"确认需要教材";
    textbookInfo->setPix(":/assets/btnIcon/书.svg");
    textbookInfo->addSubBtn(l,":/assets/btnIcon/书.svg","");
    //教材信息

    //网上评教
    ui->MenuLayout->addWidget(teacherComment);
    ui->MenuLayout->addWidget(teacherComment->subWidget);
    l=QStringList()<<"质量评价管理规定"<<"提交问卷调差表"<<"提交教学评价表";
    teacherComment->setPix(":/assets/btnIcon/选择.svg");
    teacherComment->addSubBtn(l,":/assets/btnIcon/选择.svg","");
    //网上评教

    //其他
    ui->MenuLayout->addWidget(otherTable);
    ui->MenuLayout->addWidget(otherTable->subWidget);
    l=QStringList()<<"修改个人密码"<<"查看个人登录日志"<<"文件下载";
    otherTable->setPix(":/assets/btnIcon/设置.svg");
    otherTable->addSubBtn(l,":/assets/btnIcon/设置.svg","");
    QSpacerItem *item=new QSpacerItem(30,180);
    ui->MenuLayout->addItem(item);
    //connect all in


}


void ZhkuClientMain::getCurriculum()
{

    //这里需要拿到所有的cookies
    QNetworkRequest curReq(zhkuCurriculumPreUrl);
    QNetworkReply *curReply=zhkuloginManager->manager.get(curReq);


    //这里可以指定用阻塞形式 就不用connect嵌套了
    connect(curReply,&QNetworkReply::finished,[=](){
//        if(hidyzmStatus){
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
        QString xnxq=currArrUi->ui->comboBox->currentText();
        QString md5=strProcessor.getMd5("11347"+xnxq+rs).toUpper();

        QByteArray postdata;
        postdata.append("Sel_XNXQ="+xnxq+"&");
        //rad 是类型1 2 的区分
        //rad =1 即类型
        postdata.append(QString("rad=%1&").arg(currArrUi->rad));
        //排序方式
        postdata.append(QString("px=%1&").arg(currArrUi->ui->comboBox_2->currentIndex()));
        //格式2
        if(currArrUi->zc_flag){
            postdata.append(QString("zc_flag=%1&").arg(currArrUi->zc_flag));
            postdata.append(QString("zc_input=%1&").arg(currArrUi->ui->lineEdit->text()));
        }
        postdata.append("txt_yzm=&");
        postdata.append("hidyzm="+hiddenVaildationCode+"&");
        postdata.append("hidsjyzm="+md5);
        qDebug()<<postdata;
        QString withPara=QString("?m=")+rs;
        qDebug()<<zhkuCurriculumUrl.url()+withPara;
        QNetworkRequest curriReq(QUrl(zhkuCurriculumUrl.url()+withPara));
        curriReq.setRawHeader("Content-Type", "application/x-www-form-urlencoded");

        QNetworkReply *curriReply=zhkuloginManager->manager.post(curriReq,postdata);
        connect(curriReply,&QNetworkReply::finished,[=](){
            QString curriUrlHtml=strProcessor.gbk2Utf8(curriReply->readAll());
            //            qDebug()<<curriUrlHtml;
            QRegExp urlExp("Pri_StuSel_Drawimg.aspx\\?type=\\d{1}&w=\\d{,}&h=\\d{,}&xnxq=\\d{5}");
            QString curriUrl;
            curriUrlHtml.indexOf(urlExp);
            curriUrl = urlExp.cap(0);
            qDebug()<<curriUrl;
            if(curriUrl.size()==0){
                QMessageBox::warning(this,"错误","未找到对应课表");
            }
            else{
                QNetworkRequest curriUrlReq(QString("http://jw.zhku.edu.cn/znpk/")+curriUrl);
                QNetworkReply *curriUrlReply=zhkuloginManager->manager.get(curriUrlReq);
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
                    QLabel *curriImg= new QLabel();
                    curriImg->setPixmap(QPixmap(curriPath));
                    //设置大小自适应
                    //                curriImg->setScaledContents(1);

                    currArrUi->ui->imgVerticalLayout->insertWidget(0,curriImg);
                });
            }
        });

    });


}


