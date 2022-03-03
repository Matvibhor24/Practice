#include <iostream>
using namespace std;

int num;
int &test(){    // returns address of num variable
    return num;
}
int main(){
    test()=10;      //assigning 5 to memory of num
    cout<<num; 
}
