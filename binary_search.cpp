#include <iostream>
using namespace std;
int n,i,j,flag,search,mid;

int bin_search(int array[],int l,int r,int search){
    mid=l+(r-l)/2;
    if (search==array[mid]){
        cout<<"index no. of "<<search<<" : "<<mid;
    }
    else if (search<array[mid]){
        bin_search(array,l,mid-1,search);        
    }
    else if (search>array[mid]){
        bin_search(array,mid+1,r,search);
    }
}
int main(){
    cout<<"ENTER NO. OF ELEMENTS : "<<endl;
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"ENTER THE ELEMENTS : "<<endl;
    for (i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"ENTERED ARRAY : "<<endl;
	for (i=0;i<n;i++){                                      
		cout<<arr1[i]<<" ";
    }
    for (i=0;i<n-1;i++){                                        
	    for(j=0;j<n-i-1;j++){                                   
			if(arr1[j]>arr1[j+1]){                                 
				flag=arr1[j+1];                                  
				arr1[j+1]=arr1[j];                                
				arr1[j]=flag;                                    
			}  
        }
    }
    for (i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    cout<<"\nENTER ELEMENT TO BE SEARCHED : "<<endl;
    cin>>search;
    bin_search(arr2,0,n-1,search);
    return 0;
}
     
    
    
   
    
	