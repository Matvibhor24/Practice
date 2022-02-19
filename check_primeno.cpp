#include <iostream>
using namespace std;
int num,i,flag=0;
int main(){
    cout<<"Enter number : "<<endl;
    cin>>num;

    for (i=2;i<num;i++){
        if (num%i==0){
            flag=1;
        }
    }
    if (num<0 || num==0 || num==1){
        cout<<"NIETHER PRIME NOR COMPOSITE"<<endl;
    }
    else if (flag==1){
        cout<<"COMPOSITE NUMBER"<<endl;
    }
    else{
        cout<<"PRIME NUMBER"<<endl;
    }
    return 0;
}
  
   