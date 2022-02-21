#include "QColorDlg.h"
#include <QtWidgets>
QColorDlg::QColorDlg(QWidget *parent)
	: QDialog(parent)
{
	this->setWindowTitle("颜色显示");

	this->color_label = new QLabel;
	color_label->setText("颜色");
	
	this->r_le = new QLineEdit;
	this->g_le = new QLineEdit;
	this->b_le = new QLineEdit;

	auto mainLayout = new QVBoxLayout(this);
	auto rgbLayout = new QHBoxLayout;

	rgbLayout->addWidget(r_le);
	rgbLayout->addWidget(g_le);
	rgbLayout->addWidget(b_le);

	mainLayout->addWidget(color_label);
	mainLayout->addLayout(rgbLayout);

	this->setLayout(mainLayout);
	
}

QColorDlg::~QColorDlg()
{
}
