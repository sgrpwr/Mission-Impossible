#include<bits/stdc++.h>
using namespace std;
//Recursive version
/*int binarySearch(int arr[], int l, int r, int x){
  if(l<=r){
    int mid = (l+r)/2;
    if(arr[mid]==x) return mid;
    if(x>arr[mid]) return binarySearch(arr, mid+1, r, x);
    else return binarySearch(arr, l, mid-1, x);
  }
  return -1;
}*/

//Iterative version
int binarySearch(int arr[], int l, int r, int x){
  int i=0;
  while(l<=r){
    int mid = (l+r)/2;
    if(x==arr[mid]) return mid;
    if(x>arr[mid]) l = mid+1;
    else r = mid-1; 
  }
  return -1;
}

int main(){
  int x=11;
  int n = 7;
  int arr[n] = {1,3,5,7,9,11,14};
  cout<<binarySearch(arr, 0, n-1, x);
  return 0;
}
