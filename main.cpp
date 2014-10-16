#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>


#include "transformation.h"


#include <fstream>
using namespace std;
//*************************//

int main(int argc, char *argv[])
{
 //   QApplication a(argc, argv);
 //   MainWindow w;
//    w.showMaximized();
 //   w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());
//    w.show();



//    return a.exec();

// Nazar's check

     printf("Begin of fun... =) \n\n");

     Transformation *transform = new Transformation;

     /// main method
     QStringList colors;
     colors = transform->setparallelnotes_and_colors();

     /// output test one element from QStringList
     string output_test = qstrdup(colors[14].toLatin1());
     cout<<"One of the color (15s note) is :"<<output_test<<"\n\n";

     /// Size example
     cout<<"N notes and colors is :"<<(int)colors.size()<<"\n\n";


     /// Iterator example
     QStringList::const_iterator Iterator;
     for (Iterator = colors.constBegin(); Iterator != colors.constEnd(); ++Iterator)
     cout << (*Iterator).toLocal8Bit().constData() << endl;


     printf(" \nEnd of fun  =( \n ");


}
