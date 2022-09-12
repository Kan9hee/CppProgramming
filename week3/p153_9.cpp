#include<iostream>
using namespace std;

class Oval{
private:
    int width;
    int height;
public:
    Oval();
    Oval(int w,int h);
    void set(int w,int h);
    void show();
    int getWidth();
    int getHeight();
    ~Oval();
};

Oval::Oval():width(0),height(0){}
Oval::Oval(int w,int h):width(w),height(h){}
void Oval::set(int w,int h){
    width=w;
    height=h;
}
void Oval::show(){cout<<"width = "<<width<<" height = "<<height<<endl;}
int Oval::getWidth(){return width;}
int Oval::getHeight(){return height;}
Oval::~Oval(){cout<<"Oval ¼Ò¸ê : ";show();}

int main(){
    Oval a,b(3,4);
    a.set(10,20);
    a.show();
    cout<<b.getWidth()<<", "<<b.getHeight()<<endl;
    return 0;
}