#include <iostream>
using namespace std;

class Student{
    public:
            Student(){}
            float marks;
            Student (float m){
                marks =m;
            }
            // void avg(Student s1, Student s2){ //object as arguments
            //     int a = s1.marks + s2.marks;
            void avg(Student s){      // 1 object as argument for avg of 2 objects
                int a = marks + s.marks;
                cout<<a/2;                
            }
};
int main(){
    // Student obj1(4),obj2(10),obj3;
    // obj3.avg(obj1,obj2);
    Student obj1(8),obj2(14);
    obj1.avg(obj2);
}