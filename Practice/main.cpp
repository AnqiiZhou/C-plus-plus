/* ��ҵ3 ��������
   ����֮ǰ�ϻ�1�������ľ����ࣨRectangle�� ,����һ���������飬���������������������:
   Rectangle rect[3]={Rectangle(3,4),Rectangle(7,6),Rectangle(5,6)};
   Ȼ�����getArea��getPerimeter�Ⱥ������м��㣬����ʾ���εĿ�ȣ��߶ȣ�������ܳ���
   (���ڹ��캯�������������м��������䣬�������ִ�е����̡�)
   ʵ��ǰ˼����:����������ڴ�ʲôʱ���ͷ�?
* ��ҵ4 ָ������ָ��
   ����һ��ָ�����飬������ʽ���£�Rectangle *pRectangle[3];
   �������������������ζ���Ŀ�Ⱥ͸߶ȣ�
   �ֱ����������ζ��󣬰���Щ����ĵ�ַ�ֱ��ŵ�pRectangle�����С�
   Ȼ�����getArea��getPerimeter��������ÿ�����ε�������ܳ�������ʾ������
   (���ڹ��캯�������������м��������䣬�������ִ�е����̡�)
   ʵ��ǰ˼����:ָ������ָ��������ڴ棬�������ɵĶ�����ռ�ݵ��ڴ�ֱ���ʲôʱ���ͷ�?
*/
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    const int N=3;
//    ��̬���䣬������ջ��
//    Rectangle rect[N]={Rectangle(3,4),Rectangle(7,6),Rectangle(5,6)};
//    for(int i=0;i<N;i++)
//    {
//        cout<<"rect["<<i<<"]"<<endl;
//        rect[i].display();
//    }
//    rect[N-1].getCount();

//  ��̬���䣬�����ڶ���
    int num;
    cout<<"������Ҫ������������������";
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

    cout<<"ָ�����"<<endl;
    Rectangle *pRectangle[N];
    double width,height;
    for(int i=0;i<N;i++){
        cout<<"�����"<<i+1<<"����: ";
        cin>>width;
        cout<<"�����"<<i+1<<"����: ";
        cin>>height;
        //Rectangle r(width,height);   //������ʲô���������������ڴ�����������ʼ���¸������Ž���
        //����һ�ַ�ʽ
        pRectangle[i] =new Rectangle(width,height);  //���ַ�ʽ�����Ķ����������mian����������ű��ͷ�
        pRectangle[i]->display();
    }
    pRectangle[N-1]->getCount();

    for(int i=0;i<N;i++){
        delete pRectangle[i];
    }
    return 0;
}
