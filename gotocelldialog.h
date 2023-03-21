//这里通过多重继承使用了gotocell.ui文件转换后的Ui::GoToCellDialog类，
//但这不是推荐的方式，这使得该类的头文件更为复杂
#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QDialog>

#include "ui_gotocell.h"

class GoToCellDialog : public QDialog, public Ui::GoToCellDialog
{
    Q_OBJECT

public:
    GoToCellDialog(QWidget * parent = nullptr);

private slots:
    void on_lineEdit_textChanged();
};

#endif // GOTOCELLDIALOG_H
