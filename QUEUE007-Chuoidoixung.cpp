#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        string s1;
        s1 = s;
        reverse(s.begin(),s.end());
        if(s1==s) cout<<1<<endl;
        else cout<<0<<endl;
    }
}