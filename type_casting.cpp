#include <iostream>
using namespace std;
int main(){
    float a=6.497293;
    float &b=a; //reference variables
    cout<<a<<"  "<<b;

    int x=5;
    cout<<"\nThe value of "<<x<<" as float is : "<<float(x)<<endl;
    float y=4.49839;
    cout<<"The value of "<<y<<" as int is : "<<int(y)<<endl;
    return 0;
}
