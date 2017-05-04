#include "stdafx.h"
#include "SSAssistant.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SSAssistant w;
    w.show();
    return a.exec();
}
