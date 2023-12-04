#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){ s.erase(i-1,2); i-=2;}
        }
        cout<<s<<endl;
    }
}