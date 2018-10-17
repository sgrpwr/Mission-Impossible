#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
  int pos=0,temp;
   for(int i=0; i<n; i++){
     pos = i;
    for(int j=i+1; j<n; j++){
      if(arr[pos]>arr[j]){
        pos = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[pos];
    arr[pos] = temp;
  }
  for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main() {
  int n=9;
  int arr[n] = {56,1,54,8,34,9,3,5,12};
  selectionSort(arr,n);
}
