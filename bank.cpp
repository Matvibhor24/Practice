#include <iostream>
using namespace std;

class Account{
    private:
            string name;
            int account_no;
            int type,menu;
            int balance=500;
            int deposit_am;
            int withdrawal_am;
            float P,R,T;
            void deposit(){
                cout<<"\nEnter deposit amount : ";
                cin>>deposit_am;
                balance=balance+deposit_am;
                cout<<"\nUpdated Balance amount : "<<balance;
            }
            void withdrawal(){
                do{
                    cout<<"\nEnter withdrawal amount : ";
                    cin>>withdrawal_am;
                }
                while(withdrawal_am>balance);//min amount 500 to be there
                cout<<"\nUpdated balance amount : "<<balance-withdrawal_am;   
            }
            void Interest(){
                cout<<"\nEnter principle amount : ";
                cin>>P;
                cout<<"\nEnter rate : ";
                cin>>R;
                cout<<"\nEnter time period : ";
                cin>>T;
                float interest=P*R*T/100;
                cout<<"\nInterest calculated : "<<interest;
                cout<<"\nDeposit rupees : "<<interest;
            }
    public:
            void input(){
                cout<<"\nEnter customer name : ";
                cin>>name;
                cout<<"\nEnter account number : ";
                cin>>account_no;
                cout<<"\nEnter acct type{1 for current acct and 2 for savings acct} : ";
                cin>>type;
                if (type==1){
                    curr_acct();
                }
                else if (type==2){
                    sav_acct();
                }
                else{
                    cout<<"\nEnter valid acct type.";
                }
            }
            void curr_acct(){
                cout<<"\nEnter 1 for deposit - 2 for withdrawal : ";
                cin>>menu;
                if (menu==1){
                    deposit();
                }
                else if (menu==2){
                    withdrawal();
                }
                cout<<"\nNO INTEREST FOR CURRENT ACCOUNT.";
            }
            void sav_acct(){
                cout<<"\nEnter 1 for deposit - 2 for withdrawal - 3 for interest calculation : ";
                cin>>menu;
                if (menu==1){
                    deposit();
                }
                else if (menu==2){
                    withdrawal();
                }
                else if(menu==3){
                    Interest();
                }
            }

};
int main(){
    Account obj1;
    obj1.input();
    return 0;
}