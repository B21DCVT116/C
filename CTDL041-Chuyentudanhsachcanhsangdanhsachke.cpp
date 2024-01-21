#include <bits/stdc++.h>
using namespace std;
int dinh,canh;
set<int> adj[100001];
void input(){
  cin>>dinh>>canh;
  int x,y;
  for (int i = 0; i < canh; i++)
  {
    cin>>x>>y;
    adj[x].insert(y);
    adj[y].insert(x);
  }
}
void output(){
  for (int i = 1; i <= dinh; i++)
  {
    cout<<"D"<<i<<": ";
    for (int j : adj[i])
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    input();
    output();
  }
}