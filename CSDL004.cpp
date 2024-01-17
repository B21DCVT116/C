#include <bits/stdc++.h>
 using namespace std;
int isFinal;
int a[100];
void khoitao(int n){
    for(int i=0;i<=n;i++){
        a[i]=65;
    }
}
void sinh(int n){
    int i=n;
    while(i>=1 && a[i]==66){
        a[i]=65;
        i--;
    }
    if(i==0){
        isFinal=0;
    }
    else{
        a[i]=66;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        khoitao(n);
        isFinal=1;
        while(isFinal==1){
            for(int i=1;i<=n;i++){
                cout<<(char)a[i];
            }
            cout<<" ";
            sinh(n);
        }
        cout<<endl;
    }
}