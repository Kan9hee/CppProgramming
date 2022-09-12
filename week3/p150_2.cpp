#include<iostream>
#include<string>
using namespace std;

class Date{
private:
    int year;
    int month;
    int day;
public:
    Date(int y,int m,int d);
    Date(string line);
    void show();
    int getYear();
    int getMonth();
    int getDay();
};

Date::Date(int y,int m,int d):year(y),month(m),day(d){}
Date::Date(string line){
    int temp[2];
    temp[0]=line.find('/');
    temp[1]=line.find('/',temp[0]+1);
    year=stoi((string)line.substr(0,temp[0]));
    month=stoi((string)line.substr(temp[0]+1,temp[1]));
    day=stoi((string)line.substr(temp[1]+1));
}
void Date::show(){cout<<year<<"³â"<<month<<"¿ù"<<day<<"ÀÏ"<<endl;}
int Date::getYear(){return year;}
int Date::getMonth(){return month;}
int Date::getDay(){return day;}

int main(){
    Date birth(2014,3,20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout<<birth.getYear()<<','<<birth.getMonth()<<','<<birth.getDay()<<endl;
    return 0;
}