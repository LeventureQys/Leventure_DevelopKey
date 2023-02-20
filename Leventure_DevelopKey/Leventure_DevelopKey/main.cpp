#include "Leventure_DevelopKey.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Leventure_DevelopKey::Singleton()->InitProTitle(argv);
    //Leventure_DevelopKey::Singleton()->show();

    return a.exec();
}
