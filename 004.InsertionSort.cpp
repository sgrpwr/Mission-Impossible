#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
  int i,j,val;
   for(i=1; i<n; i++){
     val = arr[i];
     j = i-1;
    while(arr[j]>val&&j>=0){
      arr[j+1] = arr[j];
      --j;
    }
    arr[j+1] = val;
  }
  for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main() {
  int n=9;
  int arr[n] = {56,1,54,8,34,9,3,5,12};
  insertionSort(arr,n);
}
