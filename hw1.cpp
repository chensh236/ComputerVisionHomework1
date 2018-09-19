//
//  main.cpp
//  Homework01_01_0910
//
//  Created by ChenSihang on 2018/9/10.
//  Copyright © 2018 ChenSihang. All rights reserved.
//  Created:

#include "CImg.h"
#include "hw1.h"
#include <math.h>
#include <iostream>
using namespace cimg_library;
using namespace std;

image_process::image_process()
{
    int width = 0;
    int height = 0;
}

image_process::image_process(string str)
{
    load_img(str);
}

// load the picture
void image_process::load_img(string str)
{
    // load the bmp picture
    SrcImg.load_bmp(str.c_str());

    //gain the width and height of the picture
    width = SrcImg._width;
    height = SrcImg._height;
}

void image_process::save_img(string str)
{
    SrcImg.save(str.c_str());
}

void image_process::test_cimg()
{
    // initial a new pic
    CImg<unsigned char> TempImg(width, height, 1, 1, 0);
    SrcImg.display();
    int x = 0;
    int y = 0;
    // process every pixel
    cimg_forXY(SrcImg, x, y)
    {
        if (SrcImg(x, y, 0) == 102 && SrcImg(x, y, 1) == 102 && SrcImg(x, y, 2) == 102)
            TempImg(x, y) = 255;
    }
    // display the picture
    TempImg.display();
    // save the picture
    TempImg.save("Thread.bmp");
}

void image_process::display()
{
    SrcImg.display();
}

void image_process::task1()
{
    cimg_forXY(SrcImg, x, y)
    {
        if (SrcImg(x, y, 0) == 255 && SrcImg(x, y, 1) == 255 && SrcImg(x, y, 2) == 255)
        {
            SrcImg(x, y, 0) = 255;
            SrcImg(x, y, 1) = 0;
            SrcImg(x, y, 2) = 0;
        }
        else if (SrcImg(x, y, 0) == 0 && SrcImg(x, y, 1) == 0 && SrcImg(x, y, 2) == 0)
        {
            SrcImg(x, y, 0) = 0;
            SrcImg(x, y, 1) = 255;
            SrcImg(x, y, 2) = 0;
        }
    }
    SrcImg.display();
}

void image_process::task2()
{
    cimg_forXY(SrcImg, x, y)
    {
        if ((x - 50) * (x - 50) + (y - 50) * (y - 50) <= 900)
        {
            SrcImg(x, y, 0) = 0;
            SrcImg(x, y, 1) = 0;
            SrcImg(x, y, 2) = 255;
        }
    }
    SrcImg.display();
}

void image_process::task3()
{
    cimg_forXY(SrcImg, x, y)
    {
        if ((x - 50) * (x - 50) + (y - 50) * (y - 50) <= 9)
        {
            SrcImg(x, y, 0) = 255;
            SrcImg(x, y, 1) = 255;
            SrcImg(x, y, 2) = 0;
        }
    }
    SrcImg.display();
}

void image_process::task4()
{
    /*三角函数法*/
    /*-----------------------------------------*/
    cimg_forY(SrcImg, y)
    {
        for (int x = 0; x <= floor(100 * cos(0.6108653)); x++)
        {
            if (y == round(x * tan(0.6108653)))
            {
                SrcImg(x, y, 0) = 0;
                SrcImg(x, y, 1) = 0;
                SrcImg(x, y, 2) = 255;
            }
        }
    }
    

    /*DDA*/
    /*-----------------------------------------*/
    // float grad_x, grad_y, point_x, point_y;
    // // k = end.x - start.x
    // int minus_x = floor(100 * cos(0.6108653)) - 0;
    // int minus_y = floor(100 * sin(0.6108653)) - 0;
    // int k = abs(minus_x);
    // //end.y - start.y
    // if (abs(minus_y) > k)    k = abs(minus_y);
    // grad_x = (float)(minus_x) / k;
    // grad_y = (float)(minus_y) / k;
    // point_x = 0;
    // point_y = 0;

    // for(int i = 0; i < k - 1; i++){
    //     SrcImg(point_x, point_y, 0) = 0;
    //     SrcImg(point_x, point_y, 1) = 0;
    //     SrcImg(point_x, point_y, 2) = 255;
    //     point_x += grad_x;
    //     point_y += grad_y;
    // }
    SrcImg.display();
}
