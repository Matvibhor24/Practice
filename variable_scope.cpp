#include <iostream>

using namespace std;
int a=5;
void _1(){
    int a=6;
    cout<<a;
}
void _2(){
    cout<<"\n"<<a;
}

int main(){
    int a=4 , b=2;
    _1();
    cout<<"\n"<<a;
    cout<<"\n"<<::a; //::global scope resolution 
    cout<<"\n"<< b;
    _2() ;
    return 0;
}

