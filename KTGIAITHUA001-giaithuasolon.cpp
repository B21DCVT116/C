#include <bits/stdc++.h>
#define MAX 40000
 using namespace std;
 char a[MAX];
  void giaithua(int n){
  	memset (a, '0', MAX );
  	a[0] = '1';
  	int i,j,len=1;//khoi tao do dai xau bang 1
  	int temp=0;//bien nho ket qua phep nhan
  	for (i=2; i<=n; i++){
  		for (j=0 ;j < len || temp!=0;j++){
  			temp+=(a[j] - '0') * i;//temp nho ket qua phep nhan 
			 a[j]= temp%10+ '0';//a[i] se lay so cuoi cua temp
			 temp/=10;//temp giu so dau lam nho cho phep toan sau
		}	
		len=j;
	}
	for(i = len-1; i >= 0; i--){//in ra a
		cout << a[i];
	}
  } 
  int main(){
  	int t;
  	cin >> t;
  	while(t--){
  		int n;
  		cin >> n;
  		if(n==0) cout << '1';
  		else giaithua(n);
	  }
  }
