#include <bits/stdc++.h>
#define MAX 100
 using namespace std;
 int doixung(long long n){
 	int i,len=1;
 	char a[MAX];
 	for (i=0; i<len || n !=0;i++){
 		a[i]=n%10+ '0';
 		n/=10;
 		len++;
	 }
	for (i=len-1;i>=(len-len/2);i--){
		a[len-i]=a[i];
	}
	for (i=0;i<len;i++){
		cout << a[i];
	}

 }
 int main(){
 	int t;
 	cin >> t;
 	while (t--){
 		long long n;
 		cin >> n;
		if (n<=10) cout << n-1 << ' ' << n+1 << endl;
		else{
			
			cout << doixung(n) << endl;
		} 
	 }
     		 return 0;
 }
