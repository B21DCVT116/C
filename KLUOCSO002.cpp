#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int i=2;
		long long n,tmp=0,dem=0;
		cin >> n;
		while(n>1){
			if (n%i==0){
				if(i!=tmp) dem++;
				n/=i;
				tmp=i;
			}
			else i++;
		}
		cout << dem << endl;
	}
}
