#include "Vesta.h"

Vesta::Vesta(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(this->ui.actionFaceDemo, &QAction::triggered, this, &Vesta::faceDemoShow);
}
void Vesta::faceDemoShow() {
	this->faceDemo = new demo::FaceDemo;
	this->faceDemo->show();
}