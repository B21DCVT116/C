#include <bits/stdc++.h>
using namespace std;

bool visited[1005];
vector<int>ke[1005];
queue<int>q;
int v,e,u;

void BFS(int u){
  visited[u]=true;
  q.push(u);
  while(!q.empty()){
    int f=q.front();
    visited[f]=true;
    q.pop();
    for (int i : ke[f])
    {
      if(!visited[i]) {
        q.push(i);
        visited[i]=true;
      }
    }
    cout<<f<<" ";
  }
}

void input(){
  cin>>v>>e>>u;
  int dsk[2*e+1];
  for (int i = 1; i <= 2*e; i++){
    cin>>dsk[i];
  }
  for (int i = 1; i <= 2*e-1; i+=2)
  {
    ke[dsk[i]].push_back(dsk[i+1]);
    ke[dsk[i+1]].push_back(dsk[i]);
  }
  
}

int main(){
  int t;
  cin>>t;
  while(t--){
    for (int i = 1; i <= 1005; i++)
    {
      visited[i]=false;
    }
    input();
    BFS(u);
    cout<<endl;
  }
}