#include <iostream>
using namespace std;
class item{
    private:
            int c;
    public:
            void summ(int a,int b){
                c=a+b;
                cout<<c<<endl;
            }
};
int main(){
    item obj[5];
    for (int i=0;i<5;i++){
        obj[i].summ(7,2);
    }
    return 0;
}