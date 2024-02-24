#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    sort(a,a+n);
    int ans=0;
    for (int i = 0; i < n; i++)
    {
      if(a[i]<=k && a[i]>=a[ans]) ans=i;
    }
    if(a[ans]<=k) cout<<ans+1<<endl;
    else cout<< "-1" <<endl;
  }
}