#include <iostream>
using namespace std;
int num;
int fact_rec(int n){
    if(n==1){
        return n;
    }
    else{
        return n*fact_rec(n-1);
    }
}
int main(){
    cout<<"Enter a number : "<<endl;
    cin>>num;
    cout<<fact_rec(num);
    return 0;
}