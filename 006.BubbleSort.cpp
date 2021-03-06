#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
  int t = *a;
  *a = *b;
  *b = t;
}


int partition(int arr[], int low, int high){
  int pivot = arr[high];
  int i = (low - 1);
  for(int j=low; j<high; j++){
    if(arr[j]<=pivot){
      i++;
      swap(&arr[i],&arr[j]);
    }
  }
  swap(&arr[i+1],&arr[high]);
  return (i+1);
}


void quickSort(int arr[], int low, int high){
  if(low<high){
      int pi = partition(arr, low, high);
      quickSort(arr, low, pi-1);
      quickSort(arr, pi+1, high);
  }
}

void PA(int arr[], int size){
  for (int i=0; i < size; i++)  cout<<arr[i]<<" "; 
}

int main() {
  int n=6;
  int arr[n] = {10, 7, 8, 9, 1, 5}; ;
  quickSort(arr, 0, n-1);
  PA(arr,n);
}
