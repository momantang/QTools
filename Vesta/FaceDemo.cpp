#include "FaceDemo.h"
#include "Utils.h"
#include <qpixmap.h>
demo::FaceDemo::FaceDemo(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	frameTimer = new QTimer(this);
	frameTimer->setInterval(56);
	this->setAttribute(Qt::WA_DeleteOnClose);
	connect(frameTimer, &QTimer::timeout, this, &FaceDemo::imageUpate);
	connect(ui.closeCamBtn, &QPushButton::clicked, this, [this]() {
		this->frameTimer->stop();
		this->cap.release();
		});
	connect(ui.openCamBtn, &QPushButton::clicked, this, [this]() {
		qDebug() << "try to open cam";
		if (cap.isOpened()) {
			return;
		}
		cap.open(0,cv::CAP_DSHOW);
		this->frameTimer->start();
		});
}

demo::FaceDemo::~FaceDemo()
{
	qDebug() << "close face";
	if (cap.isOpened()) {
		qDebug() << "release cap";
		cap.release();
	}
	qDebug() << cap.isOpened();
	frame.release();
	this->frameTimer->stop();
	this->frameTimer->deleteLater();
	qDebug() << frame.data;

	
	
}

void demo::FaceDemo::imageUpate()
{
	qDebug() << "image update";
	if (cap.isOpened()) {
		cap >> frame;
	}
	this->ui.imgLbl->setPixmap(QPixmap::fromImage(Utils::CvMat2QImage(frame)));
}
