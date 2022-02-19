#include <iostream>
using namespace std;
 class  student{
     private:
            int stuno;
            string stuname;
            string stubranch;
    public:
            void getdetails(){
                cout<<"ENTER ROLL NO. : ";
                cin>>stuno;
                cout<<"\nENTER STUDENT NAME : ";
                cin>>stuname;
                cout<<"\nENTER STUDENT BRANCH : ";
                cin>>stubranch;
            }
            void show_details(){
                cout<<"ROLL NO. : "<<stuno;
                cout<<"STUDENT NAME : "<<stuname;
                cout<<"STUDENT BRANCH : "<<stubranch;
            }
 };
 int main(){
     student obj[100];
    int i;
    for (i=0;i<100;i++){
        obj[i].getdetails();
        obj[i].show_details();
    }
    return 0;
}