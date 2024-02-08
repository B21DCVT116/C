#include <bits/stdc++.h>
using namespace std;

int dinh;
int tham[100001]={0};
set <int> adj[10001];

void input(){
  cin>>dinh;
  int x,y;
  for (int i = 0; i < dinh - 1; i++)
  {
    cin>>x>>y;
    adj[x].insert(y);
    adj[y].insert(x);
  }
}

void xuly(){
  int check=0;
  for (int i = 1; i <= dinh; i++)
  {
    for (int j : adj[i])
    {
      if(tham[j]==1) {
        check=1;
        break;
      }
      else{
        tham[j]=1;
        adj[i].erase(j);
        adj[j].erase(i);
      }
    }
    if(check==1){
      cout<<"NO"<<endl;
      break;
    }
  }
  if(check==0) cout<<"YES"<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    tham[0]=1;
    tham[1]=1;
    input();
    xuly();
  }
}
