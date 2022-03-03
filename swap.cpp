#include <iostream>
using namespace std;

void swap(int &a,int &b){           //call by reference to make changes in x and y as well
    int temp=a;                     //what changes we do in swap function as well 
    a=b;                            // beacuse memory for a and b is valid only in swap function.
    b=temp;
}
int main(){
    int x=20;
    int y=10;
    cout<<"BEFORE SWAPPING  x = "<<x<<" and y = "<<y<<endl;
    swap(x,y);
    cout<<"AFTER SWAPPING  x = "<<x<<" and y = "<<y<<endl;
}