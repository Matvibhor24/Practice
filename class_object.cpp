#include <iostream>
using namespace std;
class item{
    private:
            int c;
    public:
            void summ(int a,int b){
                c=a+b;
                cout<<c;
            }
};
int main(){
    item obj1;
    obj1.summ(7,2);
    return 0;
}