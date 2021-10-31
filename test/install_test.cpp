#include <opencv2/opencv.hpp>  //加载OpenCV 4.0头文件
#include <iostream>
#include <limits.h>
#include <stdlib.h>
using namespace std;
using namespace cv;  //opencv的命名空间

int main(int argc, char ** argv) 
{
	Mat img;  //声明一个保存图像的类
	char dir[1024];
	img = imread("..\\Data\\lena.png");  //读取图像，根据图片所在位置填写路径即可
	// #ifdef _WIN32
	// _fullpath(dir, "..", 1024);
	// #else
	// realpath("..", dir);
	// #endif
	// cout << dir << endl;
	if (img.empty())  //判断图像文件是否存在
	{
		cout << "请确认图像文件名称是否正确" << endl;
		return -1;
	}
	imshow("test", img);  //显示图像
	waitKey(0);  //等待键盘输入
	return 0;  //程序结束
}