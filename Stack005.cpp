#include <bits/stdc++.h>
using namespace std;
string check(string s){
    for(int i=1;i<s.size();i++){
        if(s[i]=='B'&&s[i-1]=='A' || s[i]=='D'&&s[i-1]=='C' ){ s.erase(i-1,2); i-=2;}
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1;
        cin>>s1;
        s1=check(s1);
        cout<<s1.size()<<endl;
    }
}