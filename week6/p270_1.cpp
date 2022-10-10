#include<iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle(){radius=1;}
    Circle(int radius){this->radius=radius;}
    double getArea(){return 3.14*radius*radius;}
};

void swap(Circle &x,Circle &y){
    Circle temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    Circle a(1),b(2);
    cout<<"a�� ���� "<<a.getArea()<<", b�� ���� "<<b.getArea()<<endl;
    swap(a,b);
    cout<<"a�� ���� "<<a.getArea()<<", b�� ���� "<<b.getArea()<<endl;
    return 0; 
}