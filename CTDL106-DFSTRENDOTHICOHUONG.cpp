#include <bits/stdc++.h>
using namespace std;

bool visited[1005];
set<int>ke[1005];
int v,e,u;


void DFS(int u){
  visited[u]=true;
  cout<<u<<" ";
  for (int j : ke[u]){
    if(!visited[j]){
      DFS(j);
    } 
  }
}

void input(){
  cin>>v>>e>>u;
  int x,y;
  for (int i = 0; i < e; i++)
  {
    cin>>x>>y;
    ke[x].insert(y);
  }
  
}

int main(){
  int t;
  cin>>t;
  while(t--){
    for (int i = 0; i < 1005; i++)
    {
      visited[i]=false;
    }
    input();
    DFS(u);
    cout<<endl;
  }
}