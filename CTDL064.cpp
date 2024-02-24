#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int main(){
  int t;
  cin>>t;
  int a[1001][1001];
  a[0][0]=1;
  for (int i = 1; i < 1001; i++)
  {
    a[i][0]=1;
    for (int j = 1; j <= i ; j++)
    {
      a[i][j]=(a[i-1][j-1]%MOD+a[i-1][j])%MOD;
    }
  }
  while(t--){
    int n,k;
    cin>>n>>k;
    cout<<a[n][k]<<endl;
  }
}