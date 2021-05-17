---
layout: post
cover-img: /assets/img/象棋.jpg
thumbnail-img: /assets/img/aboutmeback.jpg
share-img: /assets/img/象棋.jpg
tags: [Tutorial]
---
# 手摸手成为VSCode开发者！

最近学的有点苦恼，各种设计模式，调用库，数据结构与算法，环境配置，路径依赖搞人心态:(

就想着学习曲线能够尽量平滑一些，不然真的很容易放弃呢。

于是我就盯上了我的开发工具VScode，满屏幕都是黑，简直了。

后来一想，其实这种配置的方法并不困难，难的主要是能坚持下去的勇气。

所以我尽量想让这个教程的学习曲线平滑一些，让一个初学者能够找到编程的兴趣与进入这个开源世界的信心。

在这个教程中你需要有：
- 熟悉基本的电脑操作
- 有一些设计美感
- 坚持不懈，持之以恒
- 
还有吗？没有了

**还有一点值得注意，在这个教程的过程中，你会遇到各种各样未曾想到的困难，记住你并不孤独。**

首先确保你下载了nodejs工具，[nodejs](https://nodejs.org/en/)，在官网点击第一个按钮就可以下载，接下来你需要去了解什么是命令行。（下载nodejs主要是可以使用它的npm包管理工具，包管理工具又是另一个需要去长篇大论的东西，一句话，就是可以控制nodejs的工具）


稍微等个几分钟就可以安装好了。

简单的介绍一下命令行工具，一句话，可以让一行文字管理电脑。

我这里不对命令行多做解释，因为这需要另一篇文章来具体解释。

在你下载了nodejs和npm工具后，打开你的命令行工具，在Windows电脑就摁Win+R，再输入cmd，就可以进入命令行工具。

输入 *node -v*  和 *npm -v*
会出现类似下图的东西
```
C:\Users\user name>node -v
v15.3.0

C:\Users\user name>npm -v
6.14.8
```
出现这样的情况，就证明已经安装好了node和npm。

好的，最基本的我们已经完成了，接下来安装开发驱动。

在原来的命令行窗口依次输入
```
npm install -g yo generator-code
yo code
```
在输入第一行的过程中很可能出现错误，这是由于国内网络访问国外网络会出现错误，这里去百度，或者bing搜索如何解决这个问题，记住，出现问题再解决问题，而不是放弃。

**相信我，你并不孤独。**

好的，看到这里默认你已经解决了问题，那么接下来的活动我会以你已经成功下载了驱动去讲解。

输入yo code之后，你应该会看到类似下图的东东。
![vs](https://i1.wp.com/css-tricks.com/wp-content/uploads/2018/05/Screen-Shot-2018-05-19-at-12.59.30-PM.png?w=874&ssl=1)


图中第一行需要输入你想做的插件名称，当然也可以选择你想要做的什么类型的插件，照着图中按回车就可以。

当选择这个时，它会询问这是一个新的主题还是我们想要从一个现有的主题中导入。我们想要创建一个新的。
![](https://i1.wp.com/css-tricks.com/wp-content/uploads/2018/05/Screen-Shot-2018-05-19-at-1.00.57-PM.png?w=1308&ssl=1)

最后输入
```
. code
```
就可以使用vscode进入你的插件文件中。
可以看到一堆文件夹，但只有themes是控制你主题的文件哦，进入仅有的文件GentleBlack-color-theme.json就可以看到目前的配置，再按F5就可以看到你所开发的主题现状了。

然后我们就可以开始开发我们需要的主题啦，我们主题的类型以及各个地方的颜色可以在VScode官网查找。

当然官网的设置类型很多，可以根据自己的喜好来，我的暖色调主题的配置[GitHub](https://github.com/YLX621/GentleBlack).

大家可以按照我的配置，类似的搭建一个比较好看点的主题，我的太丑----

当然大家也可以按照自己的喜好来，我这里附带一个官网的链接，想认真装修你的Theme的可以来看看哦。

[主题官网](https://code.visualstudio.com/api/references/theme-color)

我的主题背景大概是这个样子![](https://github.com/YLX621/GentleBlack/raw/main/GentleBlack.png)

大家可以按照需求改变相应的主题了。
