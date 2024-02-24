#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m,x;
    cin>>n>>m;
    map<int, int> a,b,arrayUnion;
    for (int i = 0; i < n; i++)
    {
      cin>>x;
      a[x]++;
      arrayUnion[x]++;
    }
    for (int i = 0; i < m; i++)
    {
      cin>>x;
      b[x]++;
      arrayUnion[x]++;
    }
    for (pair <int, int> x:arrayUnion)
    {
      cout<<x.first<<" ";
    }
    cout<<endl;
    for (pair <int, int> x:a)
    {
      if(b[x.first] > 0){
        cout<<x.first<<" ";
      }
    }
    cout<<endl;
  }
}