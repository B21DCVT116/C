#include<bits/stdc++.h>

using namespace std;

int m,a[105],n;
bool ok;
long long res = 1e18;

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i] = j;
		if(i == m){
			long long s = 0;
			for(int l=1;l<=m;l++){
				s = s*10 + a[l];
			}
			s*=9;
			if(s%n == 0 && s>=n){
				res = min(res,s);
				ok = true;
			}
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		m = 1;
		ok = false;
		res = 1e18;
		cin>>n;
		while(m<=17 && !ok){
			Try(1);
			m+=1;
		}
		cout<<res<<endl;
	}
}
