//
// Created by Anqi Zhou on 2023/8/16.
//

#ifndef PRACTICE3_RECTANGLE_H
#define PRACTICE3_RECTANGLE_H



class Rectangle {
private:
    double width;
    double height;
    static int count;
public:
    Rectangle(double width=1.0,double height=1.0);
    ~Rectangle();
    double getWidth();
    double getHeight();
    void setWidth(double width);
    void setHeight(double height);
    double getArea();
    double getPerimeter();
    static void getCount();
    void display();
};



#endif //PRACTICE3_RECTANGLE_H
