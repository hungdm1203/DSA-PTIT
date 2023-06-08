#include<bits/stdc++.h>
using namespace std;
long long a[94];

void fib(){
	a[0]=0;
	a[1]=a[2]=1;
	for(int i=3;i<=93;i++){
		a[i]=a[i-1]+a[i-2];
	}
}

void test(long long n,long long k,long long a[]){
	if(n==1){
		cout<<"A\n";
		return;
	}
	if(n==2){
		cout<<"B\n";
		return;
	}
	if(k<=a[n-2]) test(n-2,k,a); else test(n-1,k-a[n-2],a);
	
}

main(){
	int t;cin>>t;
	fib();
	while(t--){
		long long n,k;cin>>n>>k;
		test(n,k,a);
	}
}
