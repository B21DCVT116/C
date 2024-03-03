#include <bits/stdc++.h>
using namespace std;
const int MAX = 10005;

int dinh, cnt;
int Matrix[MAX][MAX];
bool visited[MAX];

void Try(int u){
  visited[u]=true;
  cnt++;
  for (int i = 1; i <= dinh; i++)
  {
    if(Matrix[u][i]==1){
      if(!visited[i]){
        Try(i);
      }
    }
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    cin>>dinh;
    if(dinh==0) cout<<"NO"<<endl;
    else{
      for (int i = 1; i <= dinh; i++)
      {
        visited[i]=false;
        for (int j = 1; j <= dinh; j++)
        {
          Matrix[i][j]=0;
        }
      }
      int a,b;
      cnt=0;
      for (int i = 1; i < dinh; i++)
      {
        cin>>a>>b;
        Matrix[a][b]=Matrix[b][a]=1;
      }
      Try(1);
      if(cnt==dinh) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  }
}