#include <bits/stdc++.h>
using namespace std;
bool check1(long long n){
    if (n==0) return true;
    long long i=sqrt(n);
    if (i*i==n) return true;
    return false;
}
bool check2(long long n){
    while (n!=0){
        long long x=n%10;
        if (x != 0 && x != 1 && x != 4 && x != 9) return false;
        n/=10;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long k;
        cin >> k;
        long long low=pow(10,(k-1));
        long long high=(pow(10,k)-1);
        for(long long i = low; i<=high; i++){
            if(check1(i) && check2(i)){
                cout << i << endl;
                break;
            } 
        }
    }
}