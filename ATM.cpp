#include<iostream>
using namespace std;

void showMenu()
{
    cout<<"*******MENU********"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"*******************"<<endl;

}






int main()
{
    //check balance,deposit,withdraw,show menu
    int option;
    double balance=5000;

    do{
    showMenu();
    cout<<"Option: ";
    cin>>option;
    system("cls");

    switch(option)
    {
        // It will show the balance
        case 1:
        cout<<"Balance is: "<<balance<<"$"<<endl;
        break;
        // It will be used to deposit money
        case 2:
        cout<<"Deposit amount: ";
        double depositAmount;
        cin>>depositAmount;
        balance+=depositAmount;
        break;
        //It will be used to withdraw money from ATM
        case 3:
        cout<<"Withdraw amount: ";
        double withdrawAmount;
        cin>>withdrawAmount;
        if(withdrawAmount<=balance)
            balance-=withdrawAmount;
        else
            cout<<"Not enough Money"<<endl;
        break;
    }
    }
    while(option!=4);

    system("pause>0");
}
