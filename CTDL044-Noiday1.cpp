#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for (int &x : a)
    {
      cin>>x;
    }
    priority_queue <int, vector<int>, greater<int>> pq;
    for (int x:a)
    {
      pq.push(x);
    }
    long long ans=0;
    while(pq.size() > 1){
      long long top1=pq.top(); pq.pop();
      long long top2=pq.top(); pq.pop();
      ans+=top1 + top2;
      pq.push(top1 + top2);
    }
    cout<<ans<<endl;
  }
}