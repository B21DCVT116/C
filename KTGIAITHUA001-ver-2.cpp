#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s[100005];
void giaithua(int n){
  int a[500005], m=1;
  ll r=0,q;
  a[0]=1;
  for(int i=2;i<=n;i++){
  for(int j=0;j<m;j++){
    q=r;
    r=(a[j]*i+r)/10;
    a[j]=(a[j]*i+q)%10;
   }
  while(r>0){
    a[m]=r%10;
    m++;
    r=r/10;
   }
   for(int p=m-1;p>=0;p--) s[i]+=char('0'+a[p]);
  }
}
int main () {
    int t;
  cin >> t;    
   giaithua(10000);
  while(t--){
    int n;
    cin >> n;        
    if(n==0 || n==1) cout<<1<<'\n'; 
    else {

        cout<<s[n]<<'\n';
    }
  }
return 0;
}
