#include <bits/stdc++.h>
using namespace std;

void show(queue <int> Que){
  while(!Que.empty()){
    cout<<Que.front()<<" ";
    Que.pop();
  }
  cout<<endl;
}

int main(){
  queue <int> Que;
  Que.push(1);
  Que.push(5);
  Que.push(9);
  show(Que);
  Que.pop();
  show(Que);
  return 0;
}
