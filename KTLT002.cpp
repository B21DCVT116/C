#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		float x;
		cin>>n>>x;
        float s=0;
        int i=1;
        while(i<=n){
            s=sqrt(s+pow(x,i));
            i++;
        }
		cout<<fixed<<setprecision(3)<<s<<endl;
	}
}
