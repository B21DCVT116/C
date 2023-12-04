#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int i=2;
		long long n,tmp=0,tich=1;
		cin >> n;
		int check=n;
        if (n==0 || n== 1|| n==2 || n==3){ cout <<"NO"<<endl;}
        else{
        	while(n>1){
				if (n%i==0){
					if(i!=tmp) tich*=i;
					n/=i;
					tmp=i;
				}
				else i++;
			}
			if(tich < check) cout << "YES" <<endl;
	        else cout << "NO" <<endl;
		}
	}
}
