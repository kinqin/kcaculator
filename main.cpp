#include "Kwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Kwindow w;
    w.show();
    return a.exec();
}
