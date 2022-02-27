#include "Utils.h"
/*
*https://stackoverflow.com/questions/11886123/how-to-convert-qimage-to-opencv-mat
*/
cv::Mat Utils::QImage2CvMat(const QImage& image)
{
	return cv::Mat();
}

QImage Utils::CvMat2QImage(const cv::Mat& mat)
{
	if (mat.empty()) {
		return QImage();
	}
	int type = mat.type();
	switch (type)
	{
	case CV_8UC4:

		break;
	case CV_8UC3: {
		QImage img(mat.data, mat.cols, mat.rows, mat.step[0], QImage::Format_BGR888);
		return img;
	}
	case CV_8UC1:
	{
		cv::Mat temp;
		cv::cvtColor(mat, temp, cv::COLOR_GRAY2RGB);
		QImage img(temp.data, temp.cols, temp.rows, temp.step[0], QImage::Format_BGR888);
		return img;
	}
	default:
		break;
	}
	return QImage();
}
