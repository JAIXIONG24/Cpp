#include <opencv2/opencv.hpp>

int main() {
    cv::Mat img;
    img = cv::imread("a.jpg");
    cv::imshow("title", img);
    cv::waitKey(0);

    return 0;

}

/*
The way to compile and run Opencv on C++ as belowe
1. Compile : c++ $(pkg-config --cflags --libs opencv) src1_showImage.cpp 
2. Run     : ./a.out 
3. You will get the window that display the image.
*/