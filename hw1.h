/*
Created: 2018.9.13
    add the test_cimg() function
*/
#ifndef _HW1_H_
#define _HW1_H_
#endif
#include "CImg.h"
#include <string>
using namespace cimg_library;
using namespace std;

class image_process{
public:
    // initial
    image_process();
    image_process(string str);
    // load the img
    void load_img(string str);
    // save the img
    void save_img(string str, CImg<unsigned char> img);
    // display the picture
    void display();

    // the given test function
    void test_cimg();

    //
private:
    int width;
    int height;
    CImg<unsigned char> SrcImg;
};

