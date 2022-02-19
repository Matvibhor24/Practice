#include <iostream>
using namespace std;
int num,i,fact=1;
int main(){
    cout<<"Enter a number : "<<endl;
    cin>>num;

    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"The factorial of "<<num<<" is : "<<fact<<endl;
    return 0;
}