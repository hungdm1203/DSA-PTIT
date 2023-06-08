#include<bits/stdc++.h>
using namespace std;
int a[1001],dem,n,k,s;

int check(){
	int x=0;
	for(int i=1;i<=k;i++) x+=a[i];
	if(x==s) return 1; else return 0;
}

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			if(check()) dem++;
		} else Try(i+1);
	}
}


main(){
	while(cin>>n>>k>>s){
		dem=0;
		if(n==0||s==0||k==0) break;
		a[0]=0;
		Try(1);
		cout<<dem<<endl;
	}
}
