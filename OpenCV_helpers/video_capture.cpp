#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(int, char**)
{
    VideoCapture cap(0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    for (int i = 0; i < 10; i++) {
        Mat frame;
        cap >> frame; // get a new frame from camera
        // cvtColor(frame, edges, CV_BGR2GRAY);
        imwrite(strcat("om" + string(itoa(i)) + ".jpg")),frame);
    // the camera will be deinitialized automatically in VideoCapture destructor
    }
    return -1;
}