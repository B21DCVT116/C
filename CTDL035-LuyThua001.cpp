#include <bits/stdc++.h>
const long double epsilon = 1e-6;

using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    int ans;
    for (int i = 1; i <= 40; i++)
    {
      long double l = pow(a,1.0/i);
      long double r = pow(b,1.0/i);
      long double left = l-floor(l);
      long double right = ceil(r)-r;
      left<=epsilon?l=floor(l):l=ceil(l);
      right<=epsilon?r=ceil(r):r=floor(r);
      if(r>=l) ans=i;
    }
    cout<<ans<<endl;
  }
}