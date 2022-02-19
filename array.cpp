#include <iostream>
using namespace std;
int n,i;
int main(){
    cout<<"Enter number of elements : "<<endl;
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"Enter the elements : "<<endl;
    for (i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"entered arr1 elements : "<<endl;
    for (i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    for (i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    cout<<"\narr2 elements : "<<" ";
    for (i=0;i<n;i++){
        cout<<arr2[i];
    }
    cout<<endl<<sizeof(arr1);
    cout<<arr1[n]+arr2[n];
    return 0;
}