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

private:

    QLabel *label;
    QPushButton *StartButton;
    QRegion *RectArea;
    bool flag;

    int h;
    int w;
    int notes;
    QColor colours[4];

private slots:

    void start();

protected:
    void paintEvent(QPaintEvent *event);


};

#endif // MAINWINDOW_H
