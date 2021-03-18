# Qt-Zhku-Client

算法学累了，不如来写qt?

[![standard-readme compliant](https://img.shields.io/badge/readme%20style-standard-brightgreen.svg?style=flat-square)](.)

***

本仓库包含以下内容：

1. 重造的一个仲恺教务客户端，原本用python写的太烂了
2. 基于QT+爬虫形式，效率较低，没有官方API
3. 语法垃圾,实现的很笨,轻喷,喷就马上改

开发文章会在公众号更新

## TODO

- [x] 登录功能,自动登录,保存cookies等
- [x] 查询课表
    - [x] 类型一
    - [ ] 类型二
- [x] 查询成绩，自选参数
- [x] 成绩分布
- [ ] 选课
- [ ] 考试信息
- [ ] 空闲教室
- [ ] 教室课表
- [ ] 培养方案

## 目录

- [更新](#更新)
- [背景](#背景)
- [安装](#安装)
- [示例](#示例)
- [相关仓库](#相关仓库)
- [维护者](#维护者)
- [如何贡献](#如何贡献) 
- [使用许可](#使用许可)

## 更新
- 2021年3月18日11:09:49 差一点做好等级考试查询
    - 自以为 优化了结构,用emit信号的方式替代了原来使用ui文件内容
- 2021年3月17日23:58:06 添加 .gitignore 增加登录逻辑
    - 记得搞一个 根据时间判断能否登录的
- 2021年3月17日16:51:15 添加 头像框
    - 待优化
- 2021年3月17日13:55:59 添加 查询成绩分布功能
    - 准备添加细节
        - 头像框
        - 时间,名字等
- 2021年3月16日11:14:12 修复 settings的一些bug
    - 优化 closeDialog 设计
- 2021年3月16日08:12:10 添加任务栏图标,退出对话框
    - 逻辑优化
- 2021年3月15日16:30:33 补了一点细节
    - qt bug好多,难受
- 2021年3月15日14:02:46 成功拿到学生成绩
- 2021年3月15日11:04:41 已更新动态加载
    - UI设计待优化，很多难看的没处理
- 2021年3月14日22:12:47 效率过于低下,bug很多
    - TODO:
        - 将页面换成动态加载
        - 优化代码结构
    - **课表 格式二一直拿不到,先搁置 做提醒**
- 2021年3月13日01:10:49 优化UI视觉效果
- 2021年3月12日22:25:14 勉强的实现了一个伪造的树结构(表面上) 起码是能看的
    - 变量名混乱不堪,项目结构名一坨狗屎
    - 有时候自己都不知道在写什么,已经失去了目标
    - 但是要记住,很多结构不能一次性就写的很好,不然我就是天才了哈哈哈
- 2021年3月11日23:04:12 加入大量内容,UI大更新!
    - 好看了很多,封装很多函数,方便开发了
- 2021年3月10日22:02:43 拿到课表了，调整了下UI
    - 解耦合，重构了一次
    - 分离了登录界面
- 2021年3月10日00:06:14 差一点做到拿到课表了
    - qt 的正则脑子有泡
    - 搬砖
- 2021年3月8日22:16:29 已经拿到了登录权限
    - urlencode 的坑
    - qt post请求有坑
- 2021年3月7日21:29:38 第一次 更新登录界面
    - 了解了一下qt网络接口
    - 刚好做到了构建登录请求

## 背景

我python学的不好，写的跟狗屎一样，所以打算用c++吸取一下经验

## 安装

git clone this~

```sh
如果出现问题，请提交issue！！
```

## 示例

![1615960615564](README.assets/1615960615564.png)

![1615788163233](README.assets/1615788163233.png)

![1615728848770](README.assets/1615728848770.png)

![ggg](README.assets/ggg-1615559089220.gif)



![1615476637737](README.assets/1615476637737.png)

## 相关仓库

- 有个pyqt实现，不过实现的太垃圾，没放上来

## 维护者

[@yujiecong](https://github.com/yujiecong)。

## 如何贡献

非常欢迎你的加入！[提一个 Issue](./issues/new) 或者提交一个 Pull Request。

本 Readme 遵循 [Contributor Covenant](http://contributor-covenant.org/version/1/3/0/) 行为规范。

如果你喜欢作者或者帮助到了你，欢迎请小弟喝瓶可乐

<img src="README.assets/1615960800121.png" alt="1615960800121" style="zoom:20%;" />

### 贡献者

感谢以下参与项目的人：  
<a href="graphs/contributors"><img src="https://avatars2.githubusercontent.com/u/44287052?s=60&amp;v=4" /></a>

## 使用许可

[MIT License](./blob/master/LICENSE)