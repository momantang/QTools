#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Vesta.h"
#include "FaceDemo.h"

class Vesta : public QMainWindow
{
    Q_OBJECT

public:
    Vesta(QWidget *parent = Q_NULLPTR);
private slots:
    void faceDemoShow();
private:
    Ui::VestaClass ui;
    demo::FaceDemo* faceDemo=nullptr;
};
