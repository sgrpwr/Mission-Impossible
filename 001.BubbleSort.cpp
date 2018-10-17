#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
  int temp,i,j;
  for(i=0; i<n-1; i++){
    for(j=0; j<n-1; j++){
      if(arr[j]>arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main() {
  int n=9;
  int arr[n] = {56,1,54,8,34,9,3,5,12};
  bubbleSort(arr,n);
}
