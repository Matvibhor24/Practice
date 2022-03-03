#include <iostream>
using namespace std;

class demostat{
    private:
            static int count;
            int no;
    public:
            void show_data(){
                count++;
                cout<<count<<"  ";
                cout<<no;
            }
};
int demostat::count;
int main(){
    demostat obj[3];
    for (int i=0;i<3;i++){
        obj[i].show_data();
    }
}