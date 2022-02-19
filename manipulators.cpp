#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    const int a=4;
    const float b=4.698895;  
    cout<<"The value of a and b is fixed as : "<<a<<"  "<<b<<endl;
    //endl is a manipulator.
    int x=4,y=1234,z=643;
    cout<<"The value of x is : "<<setw(4)<<x<<endl;
    cout<<"The value of y is : "<<setw(4)<<y<<endl;
    cout<<"The value of z is : "<<setw(4)<<z<<endl;
    return 0;
}
