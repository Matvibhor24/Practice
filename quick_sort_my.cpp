#include <iostream>
using namespace std;
int n,i,j,k=0,a,b,h,pivot,s=0;
int quick_sort(int array[],int l,int r){
    int l_arr[a],r_arr[b];  
int arr_merge[n];
    if (l<r){
        pivot = (l+r)/2;
        cout<<"\nPIVOT ELEMENT : "<<array[pivot]<<endl;
        for ( j=l;j<r;j++){
            if (array[j]<array[pivot]){
                    l_arr[k] = array[j];
                    k++;
                    quick_sort(l_arr,l,pivot-1);
                }
            else if (array[j] > array[pivot]){
                r_arr[s] = array[j];
                s++;
            quick_sort(r_arr,pivot+1,r);
            }
        }
    }
    else{

    }
    int arr_merge[n];
    for (i=0;i<a;i++){
        arr_merge[i]=l_arr[i];
    }
    h=i;
    for (i=0;i<b;i++){
        arr_merge[h]=r_arr[i];
        h++;
    }
    return arr_merge[a+b+1];
}
int main(){
    cout<<"ENTER NO. OF ELEMENTS : ";
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENTS : "<<endl;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ENTERED ARRAY : ";
    for (i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<quick_sort(arr,0,n-1);

    return 0;
}