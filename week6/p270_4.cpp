#include<iostream>
using namespace std;

bool bigger(int a,int b,int& big){
    if(a==b)
        return true;
    else{
        big=(a>b)?a:b;
        return false;
    }
}

int main(){
    int x,y,big;
    bool b;
    cout<<"두 정수를 입력하시오: ";
    cin>>x>>y;
    b=bigger(x,y,big);
    cout<<big<<endl<<b<<endl;
    return 0;
}