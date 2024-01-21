#include <bits/stdc++.h>
using namespace std;
long long solon(long long n){
    long long i=n;
    int dem=0;
    while(i>0){
        if(i%10==3){
            n=n+(2*(pow(10,dem)));
        }
        i/=10;
        dem++;
    }
    return n;
}
long long sonho(long long n){
    long long i=n;
    int dem=0;
    while(i>0){
        if(i%10==5){
            n=n-(2*(pow(10,dem)));
        }
        i/=10;
        dem++;
    }
    return n;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;
    cout<<sonho(a)+sonho(b)<<" "<<solon(a)+solon(b)<<endl;
  }
}