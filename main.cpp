#include "servidor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    servidor w;
    w.show();
    return a.exec();
}
