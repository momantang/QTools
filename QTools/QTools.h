#pragma once

#include <QtWidgets/QMainWindow>
#include <qlineedit.h>
class QTools : public QMainWindow
{
    Q_OBJECT

public:
    QTools(QWidget *parent = Q_NULLPTR);

private:
    QLineEdit* command;
};
