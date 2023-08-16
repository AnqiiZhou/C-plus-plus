//
// Created by Anqi Zhou on 2023/8/16.
//
#include"Rectangle.h"
#include<iostream>
using namespace std;

int Rectangle::count=0; //��û���κζ��󴴽�ʱ��count������=0

//���캯����constructor��
Rectangle::Rectangle(double width,double height){  //���� Rectangle r()  �Ὣ width=1 height=1
    this->width=width;                         // ���� Rectangle r(2��3) �Ὣ width=2 height=3
    this->height=height;
    count++;
    cout<<"Constructor called."<<endl;
}
//    Rectangle();  //�޲ι��캯����Ĭ�Ϲ��캯����
//    Rectangle(double width,double height); //�вι��캯��

//����������destructor��
Rectangle::~Rectangle(){
    cout<<"Destructor called."<<endl;
    count--;
};

//�����������Եķ��ʺ��޸ĺ���
double Rectangle::getWidth(){    //���ʿ�
    return width;
}
double Rectangle::getHeight(){   //���ʸ�
    return height;
}
void Rectangle::setWidth(double width){    //���ÿ�
    this->width=width;
    cout<<"Set width = "<<this->width<<" successfully��"<<endl;
}
void Rectangle::setHeight(double height){   //���ø�
    this->height=height;
    cout<<"Set height = "<<this->height<<" successfully��"<<endl;
}
double Rectangle::getArea(){        //������
    return width*height;
};
double Rectangle::getPerimeter(){  //����ܳ�
    return 2*(width+height);
};

//����������
void Rectangle::getCount(){
    cout<<"Object count= "<<count<<endl;
}

//��ӡ����
void Rectangle::display(){
    cout<<"Width= "<<getWidth()<<" "<<"Height= "<<getHeight()<<endl;
    cout<<"Area= "<<getArea()<<" "<<"Perimeter= "<<getPerimeter()<<endl;
}

