#include<iostream>
using namespace std;
int n,i, j, k, nl, nr;
void merge(int array[], int l, int m, int r) {
   nl = m-l+1;
   nr = r-m;
   int larr[nl], rarr[nr];
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       
      array[k] = larr[i];
      i++;
      k++;
   }
   while(j<nr) {     
      array[k] = rarr[j];
      j++;
      k++;
   }
}
void merge_sort(int array[], int l, int r) {
   if(l < r) {
      int m = l+(r-l)/2;
      merge_sort(array, l, m);
      merge_sort(array, m+1, r);
      merge(array, l, m, r);
   }
}
int main() {
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
   merge_sort(arr, 0, n-1);    
   cout<<"\nAFTER MERGE SORTING : "<<endl;
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
   return 0;
}