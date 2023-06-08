#include<bits/stdc++.h>
using namespace std;
int n,k,ok,dem=0;
int a[1000],b[1000];

void sinh(){
	int i;
	for(i=n-1;i>=0;i--){
		if(b[i]==1) b[i]=0; else{
			b[i]=1;
			break;
		}
	}
	if(i<0) ok=0;
} 

void check(){
	int x=0;
	for(int i=0;i<n;i++){
		if(b[i]==1) x++;
	}
	vector<int> v;
	if(x==k){
		for(int i=0;i<n;i++){
			if(b[i]==1) v.push_back(a[i]);
		}
		int c=1;
		for(int i=0;i<v.size()-1;i++){
			if(v[i]>v[i+1]){
				c=0;break;
			}
		} 
		if(c==1) dem++;
	}
}

main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=0;
	}
	ok=1;
	while(ok){
		sinh();
		check();
	}
	cout<<dem;
}
