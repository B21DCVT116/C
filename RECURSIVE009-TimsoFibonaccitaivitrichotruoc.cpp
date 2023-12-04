#include <bits/stdc++.h>
using namespace std;
long long fibo(int n){
    long long f1=0;
    long long f2=1;
    long long fn;
    for(int i=2;i<=n;i++){
        fn=f1+f2;
        f1=f2;
        f2=fn;
    }
    return fn;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n==1||n==2) cout << 1 << endl;
        else cout << fibo(n) << endl;
    }
}