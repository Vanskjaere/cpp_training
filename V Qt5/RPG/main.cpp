#include "luncher.h"
#include <QApplication>
#include <QPushButton>
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //luncher w;
    //w.show();

    QPushButton quit ("Quit");

    quit.resize(130,80);

    quit.setFont(QFont("Comic Sans Ms",15, QFont::Bold , QFont::italic()));

    QObject::connect(&quit , SIGNAL(clicked()), &a, SLOT(quit()));


    quit.show();

    
    return a.exec(); //code retour de l'application. nécessaire
}
