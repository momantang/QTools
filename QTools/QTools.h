#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTools.h"

class QTools : public QMainWindow
{
    Q_OBJECT

public:
    QTools(QWidget *parent = Q_NULLPTR);

private:
    Ui::QToolsClass ui;
};
