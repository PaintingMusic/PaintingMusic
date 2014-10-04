#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

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
    NoteCounter = 1;

    colours[0] = QColor("cyan"); colours[1] = QColor("magenta"); colours[2] = QColor("red");
    colours[3] =  QColor("darkRed");
    Width = w/notes;
    rect_x = -75;

    ButtonLabel  = "Start";
    StartButton = new QPushButton("Start",this);
    StartButton->setGeometry(QRect(QPoint(0,h-50), QSize(w,50)));
    connect(StartButton,SIGNAL(clicked()),this,SLOT(start()));

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_slot()));


    //flag = false;
    //RectArea = new QRegion(QRect(0,h-label->height(),w,h-StartButton->height()));

}

void MainWindow::start()
{
    flag = true;
    ChangeStartStopButton();
}

void MainWindow::timer_slot()
{

    if(rect_x == 225) {rect_x = rect_x;}
    else {rect_x = rect_x + Width;}
    rect_y = 50;
    rect_w = Width;
    rect_h = 350;
    std::cout<<"RECT = "<<rect_x<<std::endl;
    QRect rect(rect_x,rect_y,rect_w,rect_h);
    RectList[NoteCounter] = rect;
    NoteCounter++;
    repaint();

    //this->repaint();
}

void MainWindow::paintEvent(QPaintEvent *e)
{

    if(!flag)return;
    Q_UNUSED(e);

    QPainter painter(this);
    DrawEvent(&painter);
}

void MainWindow::DrawEvent(QPainter *painter)
{
    for(int ii = 1; ii<=NoteCounter;ii++)
    {
        painter->setBrush(QBrush(colours[ii]));
        QRect rect = RectList[ii];
        painter->drawRect(rect);
    }
}

void MainWindow::ChangeStartStopButton()
{
    if(ButtonLabel == "Start")
    {
        ButtonLabel = "Stop";
        StartButton->setText(ButtonLabel);
        timer->start(1000);
    }
    else if (ButtonLabel == "Stop")
    {
        //connect(StartButton,SIGNAL(clicked()),this,SLOT(exit()));
        ButtonLabel = "Start";
        StartButton->setText(ButtonLabel);
        timer->stop();
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
