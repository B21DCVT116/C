#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n;
    queue<long long> q;
    q.push(9);
    while(!q.empty()){
      k=q.front();
      q.pop();
      if(k % n == 0){
        cout<<k<<endl;
        break;
      }
      q.push(k*10);
      q.push(k*10+9);
    }
  }
}