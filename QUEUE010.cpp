#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;   
        cin >> s;
        for (int i=0;i<s.size();i++){
            if(s[i]==',') s[i]=' ';
        }
        vector<long long> v;
        stringstream ss(s);
        string x;
        while(ss>>x){
            v.push_back(stoi(x));
        }
        long long max_=0;
        for(long long i=0;i<v.size();i++){
            max_= max(max_,v[i]);
        }
        cout<<max_<<endl;
    }
}