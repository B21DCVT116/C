#include <bits/stdc++.h>
using namespace std;
string check(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='#'){ s.erase(i-1,2); i-=2;}
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if(check(s1)==check(s2)) cout << 1 << endl;
        else cout << 0 << endl;
    }
}