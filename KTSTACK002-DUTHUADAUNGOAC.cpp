#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int res=0;
        for(char x : s){
            if(x=='(') res++;
            if(x==')') res--;
        }
        if(res==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}