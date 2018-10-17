#include <iostream>
using namespace std;

int GCD(int a, int b){
  if(b==0) return a;
  else return GCD(b, a%b);
}

int main() {
  int a=0,b=15;
   cout<<GCD(a,b);
}
