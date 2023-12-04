#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        if(k==0) cout << 1 << endl;
        else if (k>0) cout << pow(n,k) << endl;
        else if (k<0) cout << pow(n,k) << endl;
    }
}