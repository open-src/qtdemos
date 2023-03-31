#include "gotocelldialog.h"
#include "ui_gotocell.h"

#include <QRegularExpressionValidator>  //注意，QRegExpValidator已经被Qt6废弃
#include <QDebug>

GoToCellDialog::GoToCellDialog(QWidget *parent):
    QDialog(parent),
    _ui{new Ui::Bridge{}}
{
    _ui->setupUi(this);

    QRegularExpression regExp{"[a-zA-Z][1-9][0-9]{0,2}"};
    _ui->lineEdit->setValidator(new QRegularExpressionValidator{regExp, this});

    connect(_ui->okButton, &QPushButton::clicked, this, &GoToCellDialog::accept);
    connect(_ui->cancelButton, &QPushButton::clicked, this, &GoToCellDialog::reject);
}

GoToCellDialog::~GoToCellDialog()
{
    delete _ui;
}

void GoToCellDialog::on_lineEdit_textChanged()
//
{
    _ui->okButton->setEnabled(_ui->lineEdit->hasAcceptableInput());
    qDebug()<<"on_lineEdit_textChanged."; //qDebug()函数会返回一个类型为QDebug的，用于输出调试信息的输出流对象。
                                          //该流对象会自动在每个输出项之间放一个空格，并在最后输出项之后输出一个换行符，它支持许多c++和Qt类型。
}

void GoToCellDialog::reject(){
    qDebug()<<"invoke reject()";
    QDialog::reject();

}

void GoToCellDialog::accept(){
    qDebug()<<"invoke accept()";
    QDialog::accept();
}
