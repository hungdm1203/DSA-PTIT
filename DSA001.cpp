#include<bits/stdc++.h>
using namespace std;
int n,a[100],ok;

void ktao(){
	for(int i=0;i<n;i++) a[i]=0;
}

void sinh(){
	int i;
	for(i=n-1;i>=0;i--){
		if(a[i]==1) a[i]=0; else{
			a[i]=1;
			break;
		}
	}
	if(i<0) ok=0;
} 

void in(){
	int c=1;
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-i-1]){
			c=0;
			break;
		} 
	}
	if(c==1) {
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}

main(){
	cin>>n;
	ktao();
	ok=1;
	while(ok){
		in();
		sinh();
	}
}
