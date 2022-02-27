#pragma once
#include <opencv2/opencv.hpp>
#include <qimage.h>
namespace Utils
{
	cv::Mat QImage2CvMat(const QImage& image);
	QImage CvMat2QImage(const cv::Mat& mat);

};

