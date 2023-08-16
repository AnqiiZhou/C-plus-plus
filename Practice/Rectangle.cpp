//
// Created by Anqi Zhou on 2023/8/16.
//
#include"Rectangle.h"
#include<iostream>
using namespace std;

int Rectangle::count=0; //当没有任何对象创建时，count存在且=0

//构造函数（constructor）
Rectangle::Rectangle(double width,double height){  //当是 Rectangle r()  会将 width=1 height=1
    this->width=width;                         // 当是 Rectangle r(2，3) 会将 width=2 height=3
    this->height=height;
    count++;
    cout<<"Constructor called."<<endl;
}
//    Rectangle();  //无参构造函数（默认构造函数）
//    Rectangle(double width,double height); //有参构造函数

//析构函数（destructor）
Rectangle::~Rectangle(){
    cout<<"Destructor called."<<endl;
    count--;
};

//关于两个属性的访问和修改函数
double Rectangle::getWidth(){    //访问宽
    return width;
}
double Rectangle::getHeight(){   //访问高
    return height;
}
void Rectangle::setWidth(double width){    //设置宽
    this->width=width;
    cout<<"Set width = "<<this->width<<" successfully！"<<endl;
}
void Rectangle::setHeight(double height){   //设置高
    this->height=height;
    cout<<"Set height = "<<this->height<<" successfully！"<<endl;
}
double Rectangle::getArea(){        //获得面积
    return width*height;
};
double Rectangle::getPerimeter(){  //获得周长
    return 2*(width+height);
};

//计算对象个数
void Rectangle::getCount(){
    cout<<"Object count= "<<count<<endl;
}

//打印函数
void Rectangle::display(){
    cout<<"Width= "<<getWidth()<<" "<<"Height= "<<getHeight()<<endl;
    cout<<"Area= "<<getArea()<<" "<<"Perimeter= "<<getPerimeter()<<endl;
}

