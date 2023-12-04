#include <bits/stdc++.h>
using namespace std;
string check(string s){
    stack<char> st;
    for (char x:s){
        if(x!='*') st.push(x);
        else st.pop();
    }
    string s1="";
    while(!st.empty()){
        s1+=st.top();
        st.pop();
    }
    reverse(s1.begin(),s1.end());
    return s1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        cout<<check(s)<<endl;
    }
}