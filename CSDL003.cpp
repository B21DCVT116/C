#include <bits/stdc++.h>
 using namespace std;
int isFinal;
string s;
void sinh(string n){
    int i=n.size();
    while(i>=1 && n[i]=="1"){
        n[i]="0";
        i--;
    }
    if(i!=0){
        n[i]="1";
    }
    s=n;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        sinh(n);
        cout<<s<<endl;
    }
}