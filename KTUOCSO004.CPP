#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t;
ll x;
int main() {
  cin >> t;
  while(t--){
    cin >> x;
    ll n=x, uoc=2;
    bool check=true;
    while(n!=1){
        int dem=0;
        while(n%uoc==0){
            dem++;
            n/=uoc;
        }
        if(dem>1) {check=false; break;}
        uoc++;
        if(uoc>sqrt(n)) break;
    }
    if(check==false) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
  }

return 0;
}