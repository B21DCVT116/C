#include <bits/stdc++.h>
using namespace std;
string daochuoi(string s){
    string d;
    for (int i = s.size()-1; i >= 0; i--)
    {
        d+=s[i]; 
    }
    return d;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout<< daochuoi(s) <<endl;
    }
}