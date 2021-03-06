#pragma once

#include <QtWidgets/QMainWindow>
#include <QGraphicsPixmapItem>
#include <qcolordialog.h>
#include "asmOpenCV.h"

#include "ui_qttasktesting.h"

#include "SecondWindow.h"

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

enum colourMaps
{
    RGB,
    HSV,
    LLS
};

class QtTaskTesting : public QMainWindow
{
    Q_OBJECT

public:
    QtTaskTesting(QWidget *parent = Q_NULLPTR);

private slots:
    void lockunlock();
    void setSlideValue();
    void updateColourMap(int hue);
    void openSecondWindow();
    void drawPlot();

private:
    QGraphicsItem* graphic;
    QGraphicsLineItem* linePlot;

    Ui::QtTaskTestingClass ui;

    Ui::MainWindow ui2;

};
