#include <iostream>
using namespace std;
int i,n,flag;
int main(){
	cout<<"Enter number of elements in an array : "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elememts : "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
    }
	int j,imin;
    for(i=0;i<n-1;i++) {
      imin = i;  
      for(j = i+1; j<n; j++){
            if(arr[j] < arr[imin]){
                imin =j;
            flag=arr[i];
		    arr[i]=arr[imin];
		    arr[imin]=flag;
			}
        }
    }
    cout<<"AFTER SELECTION SORTING : "<<endl;
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}



