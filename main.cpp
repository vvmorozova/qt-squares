#include "squareswindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SquaresWindow w;
    w.show();
    return a.exec();
}
