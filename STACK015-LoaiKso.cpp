#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;
        for(int i=0;i<s.size()-1;i++){
            if(k>0){
                if(s[i]>=s[i+1]){ s.erase(i,1); i-=1;k--;}
            }
            else{
                break;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='0'){
                s.erase(i,1); i-=1;
            }
            else{
                break;
            }
        }
        cout<<s<<endl;
    }
}