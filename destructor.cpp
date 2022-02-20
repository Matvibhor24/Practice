#include <iostream>
using namespace std;
class Sum{
    private:     //even if there's nothing to allot memory by contructor destructor will be called
           int a,b,c;   // if we do not specify the destructor default one will be called at end of } for the object scope
    public: 
            
            Sum(){
                cout<<a<<"  "<<b<<"  "<<c<<endl;
            }
            void print(){
                cout<<a<<"  "<<b<<"  "<<c<<endl;
            }
            ~Sum(){
                cout<<"\ndestructor called automatically."<<endl;
            }
};
int main(){
    Sum obj1;
    {
        Sum obj2;
    }                 // destructor for memory of obj2 called here only after } end of obj2 scope
                      // destructor deallocates memory that constructor allocates
    obj1.print();
    return 0;
}