#include "CPPNetwork.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CPPNetwork w;
    w.show();
    return a.exec();
}
