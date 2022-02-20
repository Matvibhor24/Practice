#include <iostream>
using namespace std;
class Sum{
    private:

    public:                           // both default and parametrised constructors are specified 
           Sum(){
               int d=6;
               cout<<d;
           }
           Sum(int a,int b){
               int c=a+b;
               cout<<"sum = "<<c;
           }
};
int main(){
    Sum obj1(2,8);   //if we write Sum obj1; then default one will be called ; OUTPUT -----> 6
                     // but if we write arguments in it then paramaetrised one will be called ; OUTPUT ---> 10
    return 0;
}