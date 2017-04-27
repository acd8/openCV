#include <stdio.h>
#include "opencv2\core\mat.hpp"
#include <opencv2\opencv.hpp>
using namespace cv;
using namespace std;
int main() {
	//Mat a(2, 2, CV_32FC1, Scalar(1));
	//Mat b(2, 2, CV_32FC1, Scalar(2));
	//cout << a*b;
	Mat a;
	VideoCapture video(0);
	if (!video.isOpened()) {
		cout << "Cannot connect to camera";
		getchar();
		return 1;
	}
	//a = imread("C:\\Users\\Alex Donea\\Desktop\\ceas.jpg");
	//namedWindow("imagine", WINDOW_NORMAL);
	//imshow("imagine",a);
	namedWindow("camera");
	while (1) {
		video >> a;
		imshow("camera", a);
		if (waitKey(1) == 27) {
			break;
		}
	}
	

	
}