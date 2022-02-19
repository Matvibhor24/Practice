#include <iostream>
using namespace std;

int main(){

    float x=4.579;
    double y=9.39208;
    int z=4;
    cout<<"The size of "<<x<<" as float is : "<<sizeof(x)<<endl;//4
    /*sizes in 64 bit gcc compiler-->
    int = 4byte
    short int = 2byte
    float = 4byte
    double = 8byte
    char = 1byte */ 
    cout<<"The size of "<<y<<" as double is : "<<sizeof(y)<<endl;//8
    cout<<"The size of "<<z<<" as int is : "<<sizeof(z)<<endl;//4

    //BUT 
    cout<<"The size of "<<x<<" as double : "<<sizeof(4.579d)<<endl;//8
    cout<<"The size of "<<y<<" as float : "<<sizeof(9.39208f)<<endl;//4
    cout<<"The size of decimal by default : "<<sizeof(3.543)<<endl;
    //8 - double
    return 0;
}

