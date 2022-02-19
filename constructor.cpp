#include <iostream>
using namespace std;

class consdemo{
    private:
           consdemo(){
               cout<<"constructor is called automatically"<<endl;
           }
            
};
int main(){
    consdemo obj1;
    return 0;
}