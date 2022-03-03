#include <iostream>
using namespace std;

void fun(int a);
int main(){
    int m=10;
    fun(m);
    cout<<"m="<<m;  //10
    return 0;
}
void fun(int b){
    b=b+10;
    cout<<"b="<<b<<endl; //20
}