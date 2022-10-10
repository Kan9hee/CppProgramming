#include<iostream>
using namespace std;

class MyIntStack{
    int p[10];
    int tos;
public:
    MyIntStack();
    bool push(int n);
    bool pop(int &n);
};

MyIntStack::MyIntStack(){
    tos=0;
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
    MyIntStack a;
    for(int i=0;i<11;i++){
        if(a.push(i))
            cout<<i<<' ';
        else
            cout<<endl<<i+1<<"번째 stack full"<<endl;
    }
    int n;
    for(int i=0;i<11;i++){
        if(a.pop(n))
            cout<<n<<' ';
        else
            cout<<endl<<i+1<<"번째 stack empty";
    }
    cout<<endl;
    return 0;
}