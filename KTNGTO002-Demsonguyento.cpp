#include <bits/stdc++.h>
using namespace std;
bool check(long long n){
    if (n==1) return false;
    if(n==2||n==3) return true;
    for (int i=2;i<=sqrt(n); i++) if (n%i==0) return false;
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long l,r,res=0;
        cin>>l>>r;
        for (long long i=l;i<=r;i++) if(check(i)) res++;
        cout << res << endl;
    }
}