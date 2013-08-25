#include "mediahub.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MediaHub w;
    w.show();
    
    return a.exec();
}
