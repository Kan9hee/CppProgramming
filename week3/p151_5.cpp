#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Random{
public:
    Random();
    int next();
    int nextInRange(int low,int high);
};

Random::Random(){
    srand((unsigned)time(0));
}

int Random::next(){
    return rand();
}

int Random::nextInRange(int low,int high){
    int range=high-low+1;
    return low + rand()%range;
}

int main(){
    Random r;
    cout<<"0에서 "<<32767<<"까지의 랜덤 정수 10개"<<endl;
    for(int i=0;i<10;i++)
        cout<<r.next()<<endl;
    cout<<endl<<endl<<"2에서 4까지의 랜덤 정수 10개"<<endl;
    for(int i=0;i<10;i++)
        cout<<r.nextInRange(2,4)<<endl;
    return 0;
}