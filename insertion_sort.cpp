#include <iostream>
using namespace std;
int i,n,element;
int main(){
    cout<<"Enter number of elements : "<<endl;
	cin>>n;

	int arr[n];
	cout<<"Enter the elememts : "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
    }
    for(i=0;i<n;i++){
        element=arr[i];
        while(i>0 && arr[i-1]>element){
            arr[i]=arr[i-1];
            i=i-1;
            arr[i]=element;
        }
    }
    cout<<"AFTER INSERTION SORT : "<<endl;
    for (i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}    
