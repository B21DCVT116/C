#include <bits/stdc++.h>
using namespace std;
bool check(long long n){
    while(n>1){
        if(n%4!=0) return false;
        n/=4;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(check(n)==true) cout << 1 << endl;
        else cout << 0 << endl;
    }
}