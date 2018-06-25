# VehicleManagement
C++ Design Project 4
这里就放一些说明性文字。

文件夹VehicleManagement为解决方案，该解决方案采用由C++语言开发的QT GUI Application，也就是基于QT开发的可视化窗口程序。 在该文件夹中“VehicleManagement.sln”为总解决方案，可在VS环境下运行。而其中的VechicleManagement文件夹则包含了运行该解决方案所必须的文件。 GeneratedFiles中包含了关于界面的各种设置，通过QT Designer自动生成。这些由我全权负责，各位不可更改。 VehicleManagement.h包含了运行窗口所需的各种类和函数的声明，其实现方法在VehicleManagement.cpp被定义。这些亦由我全权负责。当后台程序写好后，我可以通过这些文件的修改来接入后台。 main.cpp为主窗口，这里也是由我全权负责。 总之界面相关的就由我全权负责。后台程序你们自己搞定。

一定要把后台程序的类声明放入头文件（*.h）中，并套上形如以下这样的语句

#ifndef PROGRAM_H_

#define PROGRAM_H_

//后台程序的类声明

#endif

这样可以保证头文件代码不被重复编译（即类声明不被重复声明），保证程序顺利运行。应该不难理解。 注意：模板类的声明和定义必须放在同一文件中。 这样能方便我在窗口程序中直接套上该头文件，以实现对后台的接入。

最后一提：这不是控制台应用程序，不需要写int main()

PS: 建议在VS中装上GitHub的插件，可以方便自己使用VS编辑GitHub上的代码。GitHub用处还是很多的。。。
