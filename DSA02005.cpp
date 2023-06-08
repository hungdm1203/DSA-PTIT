#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001];

void sol(string s){
	for(int i=1;i<=n;i++){
		cout<<s[a[i]-1];
	}
	cout<<" ";
}

void Try(int i,string s){
	for(int j=1;j<=n;j++){
		if(!b[j]){
			a[i]=j;
			b[j]=1;
			if(i==n) sol(s); else Try(i+1,s);
			b[j]=0;
		}
	}
}

void test(){
	string s;cin>>s;
	n=s.size();
	memset(b,0,sizeof(b));
	Try(1,s);
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
