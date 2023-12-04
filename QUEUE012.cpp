#include <bits/stdc++.h>
using namespace std;
long long dem[1000];
int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<1000;i++) dem[i]=0;
        vector<int> v;
        string s1,s2;
        cin>>s1>>s2;
        for (int i=0;i<s1.size();i++){
            if(s1[i]==',') s1[i]=' ';
        }
        for (int i=0;i<s2.size();i++){
            if(s2[i]==',') s2[i]=' ';
        }
        string s=s1+" "+s2;
        vector<int> ans;
        stringstream ss(s);
        string x;
        while(ss>>x){
            v.push_back(stoi(x));
        }
        for(int i=0;i<v.size();i++){
            dem[v[i]]++;
        }
        for(int i=0;i<v.size();i++){
            if(dem[v[i]]>=2) {
                ans.push_back(v[i]);
                dem[v[i]]=0;
            }
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i<ans.size()-1) cout<<",";
        }
        cout<<endl;
    }
}