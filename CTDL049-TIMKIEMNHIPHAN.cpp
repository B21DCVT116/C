#include <bits/stdc++.h>
using namespace std;
long long a[10000];
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    long long k;
    int index=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
      if(k==a[i]){
        index=i+1;
        break;
      }
    }
    if(index==0) cout<<"NO"<<endl;
    else cout<<index<<endl;
  }
}