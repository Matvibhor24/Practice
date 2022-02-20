#include <iostream>
using namespace std;

class consdemo{
    private:
            int a,b;
            int c=a+b;
    public:
            void sum();
           consdemo(){                   //constructor special function has to be in public section
               cout<<"constructor is called automatically"<<endl;
           }
            
};
void consdemo::sum(){
    cout<<"sum of "<<a<<" and "<<b<<" is : "<<c;
}
int main(){
    consdemo obj1,obj2; //default constructor stores random values for a and b  
                         //2 times object created means 2 times constructor function called
    obj1.sum();obj2.sum();  //different memory alloted for a and b in case of 2 different objects.
    return 0;
}