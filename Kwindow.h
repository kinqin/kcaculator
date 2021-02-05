#ifndef KWINDOW_H
#define KWINDOW_H

#include <QMainWindow>

enum BtnType
{
    Num,        //数字
    Op,         //运算符
    Dot,        //点
    Equal,      //等于
    Backspace,  //退格
    Clear,      //清除
};




QT_BEGIN_NAMESPACE
namespace Ui { class Kwindow; }
QT_END_NAMESPACE

class Kwindow : public QMainWindow
{
    Q_OBJECT

public:
    Kwindow(QWidget *parent = nullptr);
    void clearNum();
    ~Kwindow();

private:
    Ui::Kwindow *ui;

    QString mNum1;   //左操作数
    QString mNum2;   //右操作数
    QString mOp;     //运算符


public slots:
    void OnClicked(BtnType _Type,QString _btn);
};
#endif // KWINDOW_H
