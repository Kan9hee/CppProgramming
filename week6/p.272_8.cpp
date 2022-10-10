#include<iostream>
using namespace std;

class MyIntStack{
    int *p;
    int size;
    int tos;
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack& s);
    ~MyIntStack();
    bool push(int n);
    bool pop(int &n);
};

MyIntStack::MyIntStack(){
    size=10;
    tos=0;
    p=new int[size];
}

MyIntStack::MyIntStack(int size){
    this->size=size;
    tos=0;
    p=new int[this->size];
}

MyIntStack::MyIntStack(const MyIntStack& s){
    this->size=s.size;
    tos=s.tos;
    p=new int[this->size];
    for(int i=0;i<this->tos;i++)
        p[i]=s.p[i];
}

MyIntStack::~MyIntStack(){
    delete []p;
}

bool MyIntStack::push(int n){
    if(tos>=0&&tos<10){
        p[tos++]=n;
        return true;
    }
    return false;
}

bool MyIntStack::pop(int &n){
    if(tos>0&&tos<=10){
        n=p[--tos];
        return true;
    }
    return false;
}

int main(){
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b=a;
    b.push(30);

    int n;
    a.pop(n);
    cout<<"스택 a에서 팝한 값 "<<n<<endl;
    b.pop(n);
    cout<<"스택 b에서 팝한 값 "<<n<<endl;
}