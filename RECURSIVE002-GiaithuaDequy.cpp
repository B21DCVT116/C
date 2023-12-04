#include <bits/stdc++.h>
using namespace std;
long long giaithua(int n){
    if(n==1) return 1;
    else {long long gt;gt=n*giaithua(n-1);return gt;}

}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << giaithua(n) <<endl;
    }
}