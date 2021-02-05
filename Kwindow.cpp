#include "Kwindow.h"
#include "ui_kwindow.h"
#include <QDebug>

Kwindow::Kwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Kwindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Kcaculator");

    connect(ui->Num0,&QPushButton::clicked,[this](){OnClicked(Num,"0");});
    connect(ui->Num1,&QPushButton::clicked,[this](){OnClicked(Num,"1");});
    connect(ui->Num2,&QPushButton::clicked,[this](){OnClicked(Num,"2");});
    connect(ui->Num3,&QPushButton::clicked,[this](){OnClicked(Num,"3");});
    connect(ui->Num4,&QPushButton::clicked,[this](){OnClicked(Num,"4");});
    connect(ui->Num5,&QPushButton::clicked,[this](){OnClicked(Num,"5");});
    connect(ui->Num6,&QPushButton::clicked,[this](){OnClicked(Num,"6");});
    connect(ui->Num7,&QPushButton::clicked,[this](){OnClicked(Num,"7");});
    connect(ui->Num8,&QPushButton::clicked,[this](){OnClicked(Num,"8");});
    connect(ui->Num9,&QPushButton::clicked,[this](){OnClicked(Num,"9");});

    connect(ui->sumBtn,&QPushButton::clicked,[this](){OnClicked(Op,"+");});
    connect(ui->subBtn,&QPushButton::clicked,[this](){OnClicked(Op,"-");});
    connect(ui->mulBtn,&QPushButton::clicked,[this](){OnClicked(Op,"x");});
    connect(ui->divBTn,&QPushButton::clicked,[this](){OnClicked(Op,"/");});

    connect(ui->clearBtn,&QPushButton::clicked,[this](){OnClicked(Clear,"Clear");});
    connect(ui->backspaceBtn,&QPushButton::clicked,[this](){OnClicked(Backspace,"Back");});
    connect(ui->dotBtn,&QPushButton::clicked,[this](){OnClicked(Dot,".");});
    connect(ui->equalBtn,&QPushButton::clicked,[this](){OnClicked(Equal,"=");});
}

void Kwindow::clearNum()
{
    mNum1.clear();
    mNum2.clear();
    mOp.clear();
}

Kwindow::~Kwindow()
{
    delete ui;
}

void Kwindow::OnClicked(BtnType _Type, QString _btn)
{
    switch (_Type)
    {
        case Num:
        {
            if(mOp.isEmpty())
            {
                mNum1 += _btn;
            }
            else
            {
                mNum2 += _btn;
            }
            break;
        }
        case Op:
        {
            if(!mNum1.isEmpty())
            {
                mOp = _btn;
            }
            break;
        }
        case Clear:
        {
            clearNum();
            break;
        }
        case Dot:
        {
            if(mOp.isEmpty())
            {
                if(!mNum1.isEmpty() && !mNum1.contains("."))
                {
                    mNum1 += _btn;
                }
            }
            else
            {
                if(!mNum2.isEmpty() && !mNum2.contains("."))
                {
                    mNum2 += _btn;
                }
            }
            break;
        }
        case Equal:
        {
            if(mNum1.isEmpty()||mNum2.isEmpty()||mOp.isEmpty())
                return;
            double num1 = mNum1.toDouble();
            double num2 = mNum2.toDouble();
            double result = 0.0;
            if(mOp == "+")
                result = num1 + num2;
            else if(mOp == "-")
                result = num1 - num2;
            else if(mOp == "x")
                result = num1 * num2;
            else if(mOp == "/")
            {
                if(num2 == 0)
                {
                    ui->lineEdit->setText("除数不能为零");
                    clearNum();
                    return;
                }
                else
                {
                    result = num1 / num2;
                }
            }

            ui->lineEdit->setText(QString::number(result));
            clearNum();
            return;
            break;
        }
        case Backspace:
        {
            if(!mNum2.isEmpty())
            {
                mNum2.chop(1);
            }
            else if(mNum2.isEmpty()&&!mOp.isEmpty())
            {
                mOp.chop(1);
            }
            else if(!mNum1.isEmpty()&&mOp.isEmpty())
            {
                mNum1.chop(1);
            }
            break;
        }
    }

    ui->lineEdit->setText(mNum1 + "  " + mOp + "  " + mNum2);
}

