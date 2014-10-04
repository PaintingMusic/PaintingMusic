#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{

    // Fix size of the MainWindow
    this->setFixedSize(300,400);
    h = this->height();
    w = this->width();


    //Create lebel to welcome people
    label = new QLabel("Paint your Music!",this);
    label->setGeometry(QRect(QPoint(0,0), QSize(w,50)));

    //Declare number of notes
    notes = 4;
    colours[0] = QColor("cyan"); colours[1] = QColor("magenta"); colours[2] = QColor("red");
                         colours[3] =  QColor("darkRed");
    //TODO: try QRegion and QRect inside. Main idea is - to create a array of QRect inside QRegion, each with deffined position
    //(QPoint and QSize) depends from the empty area inside the MainWindow.
    //

    //QPainter *mypainter = new QPainter(this);
    //Divide area for quadrants to fill the color
    //Create Button to start painting
    StartButton = new QPushButton("Start",this);
    StartButton->setGeometry(QRect(QPoint(0,h-50), QSize(w,50)));
    connect(StartButton,SIGNAL(clicked()),this,SLOT(start()));

    flag = false;
    RectArea = new QRegion(QRect(0,h-label->height(),w,h-StartButton->height()));

}

void MainWindow::start()
{
    flag = true;
    update();
    /*
    QPainter painter(this);
    painter.begin(this);
    QRect *ArrayOfRect = new QRect[2];
    painter.setBrush(QColor(255, 0, 0, 127));
    painter.drawRect(0, 0, width()/2, height());
    */
    /*for(int ii = 1; ii<=notes;ii++)
    {
        painter.fillRect(ArrayOfRect[ii])
    }
    */
}
void MainWindow::paintEvent(QPaintEvent *e)
{

    if(!flag)return;

    Q_UNUSED(e);

    QPainter painter(this);

    //painter.setBrush(QBrush("#c56c00"));
    //painter.drawRect(10, 15, 90, 60);
    int Width = w/notes;
    for(int ii = 1; ii<=4;ii++)
    {
        painter.setBrush(QBrush(colours[ii-1]));
        painter.drawRect(0+(ii-1)*Width,50, Width,(h-StartButton->height()));
    }


}

/*int MainWindow::GetRectX(int i)
{
    return 0; brbr_test
}
*/
MainWindow::~MainWindow()
{

}




// https://www.youtube.com/watch?v=kj7nJWDeL1I
// TODO: assign the QSound to the PushButton
// TODO: QCheckBox - to choose which collors version you want to use? mb?
