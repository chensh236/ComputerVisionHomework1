//
//  main.cpp
//  Homework01_01_0910
//
//  Created by ChenSihang on 2018/9/10.
//  Copyright © 2018 ChenSihang. All rights reserved.
//  Created:

#include "CImg.h"
#include "hw1.h"
#include <iostream>
using namespace cimg_library;
using namespace std;

image_process::image_process(){
    int width = 0;
    int height = 0;
}

image_process::image_process(string str){
    load_img(str);
}

// load the picture
void image_process::load_img(string str){
    // load the bmp picture
    SrcImg.load_bmp(str.c_str());
    
    //gain the width and height of the picture
    width = SrcImg._width;
    height = SrcImg._height;
}

void image_process::save_img(string str, CImg<unsigned char> img){
    img.save(str.c_str());
}

void image_process::test_cimg(){
    // initial a new pic
    CImg<unsigned char> TempImg(width, height, 1, 1, 0);
    SrcImg.display();
    int x = 0;
    int y = 0;
    // process every pixel
    cimg_forXY(SrcImg, x, y)
    {
        if(SrcImg(x, y, 0) == 102 && SrcImg(x, y, 1) == 102 && SrcImg(x, y, 2) == 102)
            TempImg(x, y) = 255;
    }
    // display the picture
    TempImg.display();
    // save the picture
    TempImg.save("Thread.bmp");
    
}

void image_process::display(){
    SrcImg.display();
}