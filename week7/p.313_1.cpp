#include<iostream>
using namespace std;

int add(int temp[],int size,int temp2[]=nullptr){
    int result=0;
    for(int i=0;i<size;i++)
        result+=temp[i];
    if(temp2!=nullptr)
        for(int i=0;i<size;i++)
            result+=temp2[i];
    return result;
}

int main(){
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};
    int c=add(a,5);
    int d=add(a,5,b);
    cout<<c<<endl;
    cout<<d<<endl;
}