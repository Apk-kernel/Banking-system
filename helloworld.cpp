#include <iostream>
#include <iomanip>
void Balance(double balance);
double Deposit();
double Withdraw(double balance);
int main(){
    using namespace std;
    double balance =0.00;
    int choice =0;
do{
    cout<<"*********************\n";
    cout<<"BANK\n";
    cout<<"1. Balance\n";
    cout<<"2. Deposit\n";
    cout<<"3. Withdraw\n";
    cout<<"4. Exit\n";
    cin>>choice;
    cin.clear();
    fflush(stdin);
    switch(choice){
        case 1: Balance(balance);
                break;
        case 2: balance +=Deposit();
                Balance(balance);
                break;
        case 3: balance -=Withdraw(balance);
                Balance(balance);
                break;
        case 4: cout<<"Thank you for visiting\n";
                break;
    default:
        cout<<"Enter a valid option\n";
    }}
while(choice!=4);


    return 0;
}


void Balance(double balance){
std::cout<<"Your balance is: "<< std::setprecision(2) << std::fixed << balance<<"$\n";
}

double Deposit(){
    double amount = 0;
    std::cout<<"Enter amount to deposit:\n";
    std::cin>>amount;
if(amount>0){return amount;}
else{std::cout<<"Please enter valid amount";}
    return amount;
}

double Withdraw(double balance){
    double amount = 0;
    std::cout<<"Enter amount to withdraw:\n";
    std::cin>>amount;
if(amount>balance){std::cout<<"Not enough balance\n";return 0;}
else if(amount<0){std::cout<<"Invalid amount\n";return 0;}
else{return amount;}
}