#include<iostream>
using namespace std;

char& find(char a[],char c,bool& success){
    for(int i=0;a[i]!='\n';i++){
        if(a[i]==c){
            success=true;
            return a[i];
        }
    }
    return a[0];
}

int main(){
    char s[]="Mike";
    bool b=false;
    char& loc=find(s,'M',b);
    if(b==false){
        cout<<"발견 실패"<<endl;
        return 0;
    }
    loc='m';
    cout<<s<<endl;
    return 0;
}