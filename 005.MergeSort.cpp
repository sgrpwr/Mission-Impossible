#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int r, int m){
  int i,j,k;
  int n1=m-l+1,n2=r-m;
  int L[n1],R[n2];
  for(i=0; i<n1; i++) L[i] = arr[l+i];
  for(j=0; j<n2; j++) R[j] = arr[1+m+j];
  i=j=0;
  k=l;
  while(i<n1&&j<n2){
    if(L[i]<=R[j]) arr[k++] = L[i++];
    else arr[k++] = R[j++];
  }
  while(i<n1) arr[k++] = L[i++];
  while(j<n2) arr[k++] = R[j++];
}

void mergesort(int arr[], int l, int r){
  if(l<r){
    int m = (l+r)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,r,m);
  }
}

void PA(int arr[], int n) 
{ 
    for (int i=0; i < n; i++)cout<<arr[i]<<" ";
}

int main(){
  int n=6;
  int arr[n]={4,5,2,9,7,3};
  mergesort(arr,0,n-1);
  PA(arr,n);
  return 0;
}
