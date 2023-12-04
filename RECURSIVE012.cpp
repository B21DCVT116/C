#include <bits/stdc++.h>
using namespace std;
bool doixung(string s){
    int i;
    int n=s.size();
    for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1]) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        if(doixung(s)==1) cout<<1<<endl;
        else cout<<0<<endl;
    }
}