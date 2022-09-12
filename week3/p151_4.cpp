#include<iostream>
using namespace std;

class CoffeeMachine{
private:
    int coffee,water,sugar;
public:
    CoffeeMachine(int c,int w,int s);
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void show();
    void fill();
};

CoffeeMachine::CoffeeMachine(int c,int w,int s)
    :coffee(c),water(w),sugar(s){}
void CoffeeMachine::drinkEspresso(){coffee--;water--;}
void CoffeeMachine::drinkAmericano(){coffee--;water-=2;}
void CoffeeMachine::drinkSugarCoffee(){coffee--;water-=2;sugar--;}
void CoffeeMachine::show(){
    cout<<"커피머신 상태, 커피:"<<coffee<<" 물:"<<water<<" 설탕:"<<sugar<<endl;
}
void CoffeeMachine::fill(){coffee=water=sugar=10;}

int main(){
    CoffeeMachine java(5,10,3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
}