#include <bits/stdc++.h>
using namespace std;

bool visited[1005];
vector<int>ke[1005];
int truoc[1005];

int v,e,u,u2;


void DFS(int u){
  visited[u]=true;
  for (int j : ke[u]){
    if(!visited[j]){
      truoc[j]=u;
      DFS(j);
    }
  }
}

void input(){
  cin>>v>>e>>u>>u2;
  int dsk[2*e+1];
  for (int i = 1; i <= 2*e; i++){
    cin>>dsk[i];
  }
  for (int i = 1; i <= 2*e-1; i+=2){
    ke[dsk[i]].push_back(dsk[i+1]);
  }
  
}

int main(){
  int t;
  cin>>t;
  while(t--){
    for (int i = 0; i < 1005; i++)
    {
      visited[i]=false;
      truoc[i]=0;
    }
    input();
    DFS(u);
    int ans=u2;
    vector<int>result;
    result.push_back(u2);
    while(ans!=u){
      result.push_back(truoc[ans]);
      ans=truoc[ans];
    }
    reverse(result.begin(),result.end());
    for (int i : result)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
}