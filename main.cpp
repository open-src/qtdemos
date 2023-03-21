// License (BSD/MIT/GPL)
// Project: gotocell dialog: single inheritance version
//
// Author: stardust (open-src@qq.com)
// Date: 2023-03-21
// Version: 0.1.0
//
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// 采用指针方式来实现GoToCellDialog类和Ui::Bridge类的组合关系
// Qt项目编译时，会自动调用uic将gotocell.ui文件编译生成ui_gotocell.h头文件，
// gotocell.ui中的顶层对象名会被转换为ui_gotocell.h文件中的类名Ui::Bridge
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#include <QApplication>
#include <memory>

#include "gotocelldialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    auto dialog{std::make_unique<GoToCellDialog>()};
    dialog->show();

    return a.exec();
}
