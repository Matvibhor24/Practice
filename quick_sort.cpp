# include <iostream>
using namespace std;
int n,i;

int sub_arr(int array[], int l, int r){
    int pivot = array[r];
    int flag = l;
    for(int i = l;i<r;i++){
        if(array[i]<pivot){
            int temp = array[i];
            
            array[i] = array[flag];
            
            array[flag] = temp;
            
            flag++;
        }
           for(int i =0;i<n ;i++)
    {cout<<array[i];}
    cout<<endl;
    }
    
    
    int temp = array[r];
    array[r] = array[flag];
    array[flag] = temp;
 
    return flag;
}
void quick_sort(int array[], int l, int r){
    if(l<r){
        int p = sub_arr(array,l, r);
        quick_sort(array, l, (p-1));  
        quick_sort(array, (p+1), r);  
    }
}
int main(){
    cout<<"ENTER NO. OF ELEMENTS : ";
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENTS : "<<endl;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ENTERED ARRAY : "<<endl;
    for (i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quick_sort(arr,0,n-1);
    cout<<"\nAFTER QUICK SORTING : ";
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
    return 0;
}

