#include<bits/stdc++.h>
using namespace std;
#define ll  long long

ll modPower(ll a, ll b, ll M){
    ll res = 1;
    while(b){
        if(b&1) res =res*a%M;
        a=a*a%M;
        b>>=1;
    }
    return res;
}
void findFirstAndLastM(ll N,ll K,ll M){
    ll firstM;
    double y = (double)K*log10(N*1.0);
    y=y-(ll)y;
    double temp=pow(10.0,y);
    firstM=temp*(1LL)*pow(10,M-1);
    cout << firstM <<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int N,K,M;
        cin >> N >> K >> M;
        findFirstAndLastM(N,K,M);
    }
    return 0;
}