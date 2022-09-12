#include<iostream>
using namespace std;

class Tower{
private:
    int height;
public:
    Tower();
    Tower(int x);
    int getHeight();
};

Tower::Tower(){height=1;}
Tower::Tower(int x):height(x){}
int Tower::getHeight(){return height;}

int main(){
    Tower myTower;
    Tower seoulTower(100);
    cout<<"���̴� "<<myTower.getHeight()<<"����"<<endl;
    cout<<"���̴� "<<seoulTower.getHeight()<<"����"<<endl;
    return 0;
}