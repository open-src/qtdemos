/*author:stardust
 *date:03-22-2022
 *
 *gotocell dialog using multi-inheritance
 *
**/
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
