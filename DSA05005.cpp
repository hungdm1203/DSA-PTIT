#include<bits/stdc++.h>
using namespace std;

void test(){
	int n;cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>=a[j]) b[i]=max(b[i],b[j]+1);
		}
	}
	sort(b,b+n);
	cout<<n-b[n-1];
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
