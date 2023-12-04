#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int tong = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if(isdigit(s[i])) tong+=(s[i]-'0');
        }
        cout << tong <<endl;
    }
}