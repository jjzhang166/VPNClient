#include "vpnclient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VPNClient w;
    w.show();

    return a.exec();
}
