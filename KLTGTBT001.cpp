#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		float s=0,x,Xk=1;
		long T=0;
		int i;
		cin>> n>>x;
		for (i=1;i<=n;i++){
			T+=i; //T=1+2+3+...+j tinh mau
			Xk*=x;//tinh tu 
			s+=Xk/T;
		}
		cout<<fixed<<setprecision(3)<<s<<endl;
	}
}
