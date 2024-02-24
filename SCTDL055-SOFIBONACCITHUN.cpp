#include <bits/stdc++.h>
#define mod 1e9+7;
using namespace std;

long long fibo(int n){
    long f1=0;
    long long f2=1;
    long long fn;
    for(int i=2;i<=n;i++){
        fn=(f1+f2);
        f1=f2;
        f2=fn;
        fn%=1000000007;
    }
    return fn;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;  
  }
}