#include "gotocelldialog.h"

#include <QRegularExpressionValidator>

GoToCellDialog::GoToCellDialog(QWidget *parent)
    : QDialog(parent)
{
    setupUi(this);//创建gotocell对话框的孩子窗口部件及其布局

    QRegularExpression regExp("[A-Za-z][1-9][0-9]{0,2}");
    lineEdit->setValidator(new QRegularExpressionValidator(regExp, this));

    connect(okButton, &QPushButton::clicked, this, &GoToCellDialog::accept);
    connect(cancelButton, &QPushButton::clicked, this, &GoToCellDialog::reject);
}

void GoToCellDialog::on_lineEdit_textChanged()
{
    okButton->setEnabled(lineEdit->hasAcceptableInput());
}
