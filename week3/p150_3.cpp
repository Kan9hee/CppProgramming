#include<iostream>
#include<string>
using namespace std;
class Account{
private:
    string name;
    int id;
    int money;
public:
    Account(string n,int i,int m);
    void deposit(int m);
    string getOwner();
    int withdraw(int m);
    int inquiry();
};

Account::Account(string n,int i,int m):id(i),money(m){name=n;}
void Account::deposit(int m){money+=m;}
string Account::getOwner(){return name;}
int Account::withdraw(int m){
    if(m>money)
        return 0;
    money-=m;
    return money;
}
int Account::inquiry(){return money;}

int main(){
    Account a("kitae",1,5000);
    a.deposit(50000);
    cout<<a.getOwner()<<"ÀÇ ÀÜ¾×Àº "<<a.inquiry()<<endl;
    int money=a.withdraw(20000);
    cout<<a.getOwner()<<"ÀÇ ÀÜ¾×Àº "<<a.inquiry()<<endl;
    return 0;
}