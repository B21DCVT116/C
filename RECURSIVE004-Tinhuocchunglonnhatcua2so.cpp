#include <bits/stdc++.h>
using namespace std;
long long UCLN(long long a, long long b){
    while(a!=b){
        if(a>b) a-=b;
        else b-=a; 
    }
    return a;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        cout << UCLN(a,b) << endl;
    }
}