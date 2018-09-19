#include "hw1.h"
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    /*通过单实例进行测试，输出图片*/
    /*-------------------------------------------*/
    /*Created: 2018.9.16*/
    //display the img
    image_process instance("1.bmp");
    instance.display();
    //white->red; black->green
    instance.task1();
    // circle: R:30 circle(50, 50)
    instance.task2();

    // circle : R:3 circle(50, 50)
    instance.task3();

    // a line 35 degrees
    instance.task4();
    instance.save_img("2.bmp");


    /*通过不同的实例进行单独测试与CImg提供的函数进行比较*/
    /*-------------------------------------------*/
    /*Created: 2018.9.12*/
    // //display the img
    // image_process instance1("1.bmp");
    // instance1.display();
    // //white->red; black->green
    // instance1.task1();
    // instance1.save_img("2.bmp");

    // image_process instance2("1.bmp");
    // // circle: R:30 circle(50, 50)
    // instance2.task2();
    // instance2.save_img("3.bmp");
    // //Compare
    // CImg<unsigned char> testTask2("1.bmp");
    //  unsigned char blue[] = { 0, 0, 255 };
    // testTask2.draw_circle(50, 50, 30, blue);
    // testTask2.display();
    // testTask2.save("3_1.bmp");

    // image_process instance3("1.bmp");
    // // circle : R:3 circle(50, 50)
    // instance3.task3();
    // instance3.save_img("4.bmp");
    // //Compare
    // CImg<unsigned char> testTask3("1.bmp");
    // unsigned char yellow[] = { 255, 255, 0 };
    // testTask3.draw_circle(50, 50, 3, yellow);
    // testTask3.display();
    // testTask3.save("4_1.bmp");


    // image_process instance4("1.bmp");
    // // a line 35 degrees
    // instance4.task4();
    // instance4.save_img("5.bmp");
    // //Compare
    // CImg<unsigned char> testTask4("1.bmp");
    // int x1 = floor(cos(0.6108653) * 100);
    // int y1 = floor(sin(0.6108653) * 100);
    // testTask4.draw_line(0,0,x1, y1, blue, 1);
    // cout << x1 << "       "<< y1<<endl;
    // testTask4.display();
    // testTask4.save("5_1.bmp");


    return 0;
}