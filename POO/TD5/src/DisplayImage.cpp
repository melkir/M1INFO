#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

void displayImage(Mat image) {
    namedWindow("Display Image", CV_WINDOW_AUTOSIZE);
    imshow("Display Image", image);
    waitKey(0);
}

int main (int argc, char** argv) {
    Mat image = imread(argv[1], 1);
    if(argc != 2 || !image.data) {
        printf("No imagedata\n");
        return -1;
    }
    displayImage(image);
    return 0;
}