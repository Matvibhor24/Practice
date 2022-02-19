#include <iostream>
using namespace std;
int n,i,search,flag;
int main(){
    cout<<"ENTER NO. OF ELEMENTS : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS : "<<endl;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ENTERED ARRAY : "<<endl;
	for (i=0;i<n;i++){                                      
		cout<<arr[i]<<" ";
    }
    cout<<"\nENTER THE ELEMENT TO BE SEARCHED : "<<endl;
    cin>>search;
    for (i=0;i<n;i++){
        if (arr[i]==search){
            cout<<"index no. of "<<search<<" : "<<i;
            break;
        }
    }
    return 0;
}