#include "QTools.h"

#include <QVBoxLayout>
#include <qcolordialog.h>

QTools::QTools(QWidget* parent)
	: QMainWindow(parent)
{
	command = new QLineEdit;
	command->setPlaceholderText("请输入调用子窗体");
	command->setStyleSheet(R"(
        QLineEdit{
            height:60;
            font :normal normal 50px '宋体';
        }
        )");
	setCentralWidget(new QWidget());
	auto mainLayout = new QVBoxLayout(this->centralWidget());
	mainLayout->addWidget(command);
	this->setMinimumSize(QSize(800, 50));
	connect(command, &QLineEdit::textChanged, this, [=]() {
		qDebug() << command->text();
		if (QString("color") == command->text()) {
			command->clearFocus();
			qDebug() << " launch colordlag";
			auto colorDlg = new QColorDialog;
			colorDlg->show();
			
		}
		});

}
