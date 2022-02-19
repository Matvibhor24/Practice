#include <iostream>
using namespace std;
int i,j,n,flag;
int main(){
	cout<<"Enter number of elements in array : "<<endl;
	cin>>n;
	int arr[n];                                                 //input type arr[size]
	cout<<"Enter the elememts : "<<endl;                        
	for(i=0;i<n;i++){                                           // n times iteration to input elements
		cin>>arr[i];
	}
	cout<<"BEFORE BUBBLE SORT : "<<endl;
	for (i=0;i<n;i++){                                          // n times iteration to print elements before sorting
		cout<<arr[i]<<" ";
	}
	for (i=0;i<n-1;i++){                                        //  [3,7,5,4,1] --> [3,5,7,4,1] --> [3,5,4,7,1] --> [3,5,4,1,7]
		for(j=0;j<n-i-1;j++){                                   //  --> [3,5,4,1,7] --> [3,4,5,1,7] --> [3,4,1,5,7]
			if(arr[j]>arr[j+1]){                                //  --> [3,4,1,5,7] --> [3,1,4,5,7] 
				flag=arr[j+1];                                  //  --> [1,3,4,5,7]
				arr[j+1]=arr[j];                                // hence 1 - smallest is brought to first position in n-1 iterations
				arr[j]=flag;                                    //(max complexity) using i from 0 to n-1.
			}                                                   // and every time 1 max is fixed so remaining = n-(i+1) elements 
		}                                                       // Hence in each i , n-i-1 no. of iterations req to settle adjacent elements 
	}                                                           // using j=0 to j=n-i-1
	cout<<"\nAFTER BUBBLE SORT : "<<endl;
	for (i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}