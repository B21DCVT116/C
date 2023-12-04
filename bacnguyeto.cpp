#include <bits/stdc++.h>
using namespace std;
long long bac(long long n,long long p){
    if (n<=1){
        return 0;
    }
    else {
        int k = 1 ;
        long long tong = 0;
        while (n>=pow(p,k)){
            tong = tong + n/pow(p,k);
            k++;
        }
        return tong ;
    }
    
}
int main(){
	int t;
	cin >> t;
	while ( t--){
		long long n,p;
		cin >> n >>p;
		cout << bac(n,p) << endl ; 
	}
	return 0;
}