#include <iostream>
using namespace std;
class Bank{
    private:
            string name;
            int acc_no;
            string acc_type;
            float balance_am;
            float deposit_am,withdraw_am;
    public:
            Bank(){
                cout<<"Enter name of account holder : ";
                cin>>name;
                cout<<"\nEnter account number : ";
                cin>>acc_no;
                cout<<"\nEnter type of account : ";
                cin>>acc_type;
            }
            void deposit(){
                cout<<"\nEnter amount to be deposited : ";
                cin>>deposit_am;
                balance_am=balance_am + deposit_am;
                cout<<"\nBALANCE AMOUNT : "<<balance_am;
            }
            void withdraw(){
                cout<<"\nEnter amount to be withdrawn : ";
                cin>>withdraw_am;
                do{
                    balance_am=balance_am - withdraw_am;
                }
                while (withdraw_am<=balance_am+100);   //min 100 to be there
            }
            void show(){
                cout<<"\nACCOUNT HOLDER NAME : "<<name;
                cout<<"\nACCOUNT NUMBER : "<<acc_no;
                cout<<"\nTYPR OF ACCOUNT : "<<acc_type;
                cout<<"\nACCOUNT BALANCE AMOUNT : "<<balance_am;
            }
};
int main(){
    Bank obj1;
    obj1.deposit();
    obj1.withdraw();
    obj1.show();
    return 0;
}