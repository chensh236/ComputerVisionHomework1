//
//  main.cpp
//  Homework01_01_0910
//
//  Created by ChenSihang on 2018/9/10.
//  Copyright © 2018 ChenSihang. All rights reserved.
//  Created:

#include "CImg.h"
#include <iostream>
using namespace cimg_library;
using namespace std;

void test_cimg(){
    // load the bmp picture
    CImg<unsigned char> SrcImg;
    SrcImg.load_bmp("1.bmp");
    
    //gain the width and height of the picture
    int w = SrcImg._width;
    int h = SrcImg._height;
    
    // initial a new pic
    CImg<unsigned char> TempImg(w, h, 1, 1, 0);
    SrcImg.display();
    int x = 0;
    int y = 0;
    cimg_forXY(SrcImg, x, y)
    {
        if(SrcImg(x, y, 0) == 102 && SrcImg(x, y, 1) == 102 && SrcImg(x, y, 2) == 102)
            TempImg(x, y) = 255;
    }
    TempImg.display();
    TempImg.save("Thread.bmp");
    
}




int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}