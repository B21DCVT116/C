#include <bits/stdc++.h>
 using namespace std;
 int main(){
 	int t;
 	cin >> t;
 	while (t--){
 		int k,d;
 		cin >> k;
 		if (k==1 || k==2) cout << 9 <<endl;
 		else {
 			d=k%2;k/=2;
            int dem=9*pow(10,(k-1));
 			if(d==0){
 				cout << dem << endl;
			 }
			else cout << dem * 10 << endl;
		 }
	 }
     		 return 0;
 }
