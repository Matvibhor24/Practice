#include <iostream>
using namespace std;

int main(){
    int quiz,mid_term,fin_score;
    cout<<"Enter quiz marks : ";
    cin>>quiz;
    cout<<"\nEnter mid term marks : ";
    cin>>mid_term;
    cout<<"\nEnter final score : ";
    cin>>fin_score;
    
    int avg=(quiz+mid_term+fin_score)/3;
    if(avg>=90){
        cout<<"GRADE A";
    }
    else if (avg>=70 && avg<=90){
        cout<<"GRADE B";
    }
    else if (avg>=50 && avg<=70){
        cout<<"GRADE C";
    }
    else{
        cout<<"GRADE F";
    }

    return 0;
}