#include <iostream>
using namespace std;
class test{
private :
    int test_code;
    string description;
    int candidate_no;
    int center_reqd;
    void calcntr(int candidate_no){
        center_reqd=candidate_no/100 + 1;
        cout<<"no. of centres : "<<center_reqd<<endl;
    }
public : 
    void schedule(){
        cout<<"Enter test code : "<<endl;
        cin>>test_code;
        cout<<"\nEnter description : "<<endl;
        cin>>description;
        cout<<"\nEnter no. of candidates: "<<endl;
        cin>>candidate_no;
        calcntr(candidate_no);
    }
    void distest(){
        cout<<"Test code : "<<test_code<<endl;
        cout<<"Description : "<<description<<endl;
        cout<<"No. of candidates : "<<candidate_no<<endl;
        cout<<"No. of centers required : "<<center_reqd<<endl;
    }
};
int main(){
    test obj1;
    obj1.schedule();
    obj1.distest();
    return 0;
}