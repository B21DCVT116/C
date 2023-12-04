#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        set<char> str;
        for(int i=0; i<a.size();i++) str.insert(a[i]);
        for(int i=0; i<b.size();i++) str.insert(b[i]);
        cout << str.size();
    }
}