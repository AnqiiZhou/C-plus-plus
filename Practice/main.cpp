/* 作业3 对象数组
   利用之前上机1所建立的矩形类（Rectangle） ,创建一个对象数组，用下述语句声明对象数组:
   Rectangle rect[3]={Rectangle(3,4),Rectangle(7,6),Rectangle(5,6)};
   然后调用getArea和getPerimeter等函数进行计算，并显示矩形的宽度，高度，面积和周长。
   (可在构造函数和析构函数中加入输出语句，检验程序执行的流程。)
   实验前思考题:对象数组的内存什么时候释放?
* 作业4 指向对象的指针
   创建一个指针数组，定义形式如下：Rectangle *pRectangle[3];
   在运行中输入三个矩形对象的宽度和高度，
   分别建立三个矩形对象，把这些对象的地址分别存放到pRectangle数组中。
   然后调用getArea和getPerimeter函数计算每个矩形的面积和周长，并显示出来。
   (可在构造函数和析构函数中加入输出语句，检验程序执行的流程。)
   实验前思考题:指向对象的指针数组的内存，和所生成的对象所占据的内存分别在什么时候释放?
*/
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    const int N=3;
//    静态分配，分配在栈中
//    Rectangle rect[N]={Rectangle(3,4),Rectangle(7,6),Rectangle(5,6)};
//    for(int i=0;i<N;i++)
//    {
//        cout<<"rect["<<i<<"]"<<endl;
//        rect[i].display();
//    }
//    rect[N-1].getCount();

//  动态分配，分配在堆中
    int num;
    cout<<"请输入要建立的数组对象个数：";
    cin>>num;
    Rectangle *rect=new Rectangle[num];
    rect[0].setWidth(2);
    rect[0].setHeight(3.5);
    for(int i=0;i<N;i++)
    {
        cout<<"rect["<<i<<"]"<<endl;
        rect[i].display();
    }
    delete[] rect;

    cout<<"指针访问"<<endl;
    Rectangle *pRectangle[N];
    double width,height;
    for(int i=0;i<N;i++){
        cout<<"输入第"<<i+1<<"个宽: ";
        cin>>width;
        cout<<"输入第"<<i+1<<"个高: ";
        cin>>height;
        //Rectangle r(width,height);   //定义了什么对象，他的生命周期从他被创建开始到下个大括号结束
        //另外一种方式
        pRectangle[i] =new Rectangle(width,height);  //这种方式创建的对象会在整个mian函数运行完才被释放
        pRectangle[i]->display();
    }
    pRectangle[N-1]->getCount();

    for(int i=0;i<N;i++){
        delete pRectangle[i];
    }
    return 0;
}
