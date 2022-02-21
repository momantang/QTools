#pragma once

#include <QDialog>
#include <qlabel.h>
#include <QLineEdit>
class QColorDlg : public QDialog
{
	Q_OBJECT

public:
	QColorDlg(QWidget *parent=nullptr);
	~QColorDlg();
private:
	QLabel* color_label;
	QLineEdit* r_le; 
	QLineEdit* g_le;
	QLineEdit* b_le;
};
