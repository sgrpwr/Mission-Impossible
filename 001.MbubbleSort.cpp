#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
  int temp,i,j,flag=0;
  for(i=0; i<n-1; i++){
    for(j=0; j<n-1; j++){
      if(arr[j]>arr[j+1]){
        flag=1;
        cout<<"here";
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
    if(flag==0) break;
  }
  for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main() {
  int n=9;
  int arr[n] = {1,2,3,4,5,6,7,8,9};
  bubbleSort(arr,n);
}
