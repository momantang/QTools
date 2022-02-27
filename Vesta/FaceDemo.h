#pragma once

#include <QWidget>
#include <qtimer.h>
#include "ui_FaceDemo.h"
#include <opencv2/opencv.hpp>
namespace demo {
	class FaceDemo : public QWidget
	{
		Q_OBJECT

	public:
		FaceDemo(QWidget* parent = Q_NULLPTR);
		~FaceDemo();
	private slots:
		void imageUpate();
	private:
		Ui::FaceDemo ui;
		QTimer* frameTimer;
		cv::VideoCapture cap;
		cv::Mat frame;
	};
}