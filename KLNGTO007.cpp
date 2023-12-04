#include <bits/stdc++.h>
using namespace std;
long long max(long long a, long long b){
    if (a>b) return a;
    else return b;
}
void Eratosthenes(long long l,long long r){
    long long prime[r-l+1];
    for(long long i=0;i<= r-l+1;i++) prime[i]=1;
    for(long long i=2;i<=sqrt(r);i++){
        for(long long j=max(i*i,(l+i-1)/i*i);j<=r;j+=i){
            prime[j-l]=0;
        }
    }
    for(long long i = r ; i >= max(l,2);i--){
        if(prime[i-l]){
            cout << i << endl;
            break;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long l,r;
        cin >> l >> r;
        Eratosthenes(l,r);
    }
}