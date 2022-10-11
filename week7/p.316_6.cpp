#include<iostream>
using namespace std;

class ArrayUtility2{
public:
    static int*concat(int s1[],int s2[],int size);
    static int*remove(int s1[],int s2[],int size,int&retSize);
};

int* ArrayUtility2::concat(int s1[],int s2[],int size){
    int*p=new int[size*2];
    if(!p)
        return NULL;
    for(int i=0;i<size;i++)
        p[i]=s1[i];
    for(int i=0;i<size;i++)
        p[size+i]=s2[i];
    return p;
}

int* ArrayUtility2::remove(int s1[],int s2[],int size,int&retSize){
    int* temp=new int[size];
    retSize=0;
    for(int i=0;i<size;i++){
        int j;
        for(j=0;j<size;j++){
            if(s1[i]==s2[j])
                break;
        }
        if(j==size)
            temp[retSize++]=s1[i];
    }
    return temp;
}

int main(){
    int x[5],y[5];
    cout<<"배열 x 입력: ";
    for(int i=0;i<5;i++)
        cin>>x[i];
    cout<<"배열 y 입력: ";
    for(int i=0;i<5;i++)
        cin>>y[i];

    cout<<"합친 결과 출력"<<endl;
    int *temp=ArrayUtility2::concat(x,y,5);
    for(int i=0;i<10;i++)
        cout<<temp[i]<<' ';
    
    int count;
    cout<<endl<<"뺀 결과 출력"<<endl;
    temp=ArrayUtility2::remove(x,y,5,count);
    cout<<count<<"개"<<endl;
    for(int i=0;i<count;i++)
        cout<<temp[i]<<' ';
}