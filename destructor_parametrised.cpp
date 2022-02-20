// destructor function cant have argument 
// this program illustrates destructor for parametrised constructor

#include <iostream>
using namespace std;
class Sum{
    private:
        int c;
    public:
            Sum(int ,int );
            ~Sum(){
                "destructor called.";
            }
};
Sum::Sum(int a,int b){
    c = a+b;
    cout<<c<<endl;
}
int main(){
    Sum obj1(9,8);
    {
        Sum obj2(2,7);
    }
    return 0;
}