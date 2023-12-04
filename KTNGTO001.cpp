#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if (n % i == 0) return false;
    }
    return true;
}
bool check(int n){
    while(n){
        if(prime(n%10) != true) return false;
        n/=10;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,dem=0;
        cin >> n;
        for (int i = 2; i < n; i++)
        {
            if(prime(i) && check(i)) dem++;
        }
        cout << dem << endl;
    }
}