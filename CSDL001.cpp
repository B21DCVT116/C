#include <bits/stdc++.h>
 using namespace std;
int isFinal,a[100];
void khoitao(int n){
    for(int i=0;i<n;i++){
        a[i]=0;
    }
}
void sinh(int n){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0){
        isFinal=0;
    }
    else{
        a[i]=1;
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
                cout<<a[i]<<" ";
            }
            cout<<endl;
            sinh(n);
        }
    }
}