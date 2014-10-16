#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include <QRect>
#include <QRegion>
#include <QPainter>
#include <QGraphicsView>

#include <string>
#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int Width;

private:

    QLabel *label;
    QPushButton *StartButton;
    QRegion *RectArea;
    bool flag;

    int h;
    int w;
    int notes, NoteCounter;
    int rect_x,rect_y, rect_w,rect_h;
    QColor colours[400], single_color;
    QString ButtonLabel;
    QRect RectList[400];
    QTimer *timer;


private slots:

    void start();
    void timer_slot();

protected:
    void paintEvent(QPaintEvent *event);
    void DrawEvent(QPainter *painter);
    void ChangeStartStopButton();


};

#endif // MAINWINDOW_H
