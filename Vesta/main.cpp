#include "Vesta.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Vesta w;
    w.show();
    return a.exec();
}
