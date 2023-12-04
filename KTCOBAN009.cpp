#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        long long res=0;
        for (char x:s){
            if(isdigit(x)) res++; 
        }
        cout << res << endl;
    }
}