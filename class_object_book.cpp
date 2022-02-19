#include <iostream>
using namespace std;
class book
{   private:
            int book_no;
            string book_title;
            float price;
            void total_cost(int n){
                cout<<"TOTAL COST : "<<n*price<<endl;}
    public:
            book(){
                cout<<"\nenter book_no :  ";
                cin>>book_no;
                cout<<"\nenter book_title :  ";
                cin>>book_title;
                do{
                    cout<<"\nenter price per book :  ";
                    cin>>price;}
                while (price<=0);
            }
            int purchase(){
                int num;
                cout<<"\nenter number of copies : ";
                cin>>num;
                total_cost(num);
                return 0;
                }
};
int main(){
    book obj1;
    obj1.purchase();
    return 0;
}

