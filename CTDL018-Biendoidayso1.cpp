#include <bits/stdc++.h>
using namespace std;
int a[10000];
void sinh(int n){
  for (int i = 1; i <= n; i++)
  {
    a[i]=a[i]+a[i+1];
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
      cin>>a[i];
    }
    
    while (n>0)
    {
      cout<<"[";
      for (int i = 1; i <= n; i++)
      {
        cout<<a[i];
        if(i==n) cout<<"]"<<"\n";
        else cout<<" ";
      }
      n--;
      sinh(n);
    }
  }
}