#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Vesta.h"

class Vesta : public QMainWindow
{
    Q_OBJECT

public:
    Vesta(QWidget *parent = Q_NULLPTR);

private:
    Ui::VestaClass ui;
};
