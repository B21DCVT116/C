#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long l,r;
        cin >> l>>r;
        long long k=(r-l)+1;
        cout << ((r+l)*k/2)<<endl;
    }
}