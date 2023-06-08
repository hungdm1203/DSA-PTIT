#include<bits/stdc++.h>
using namespace std;

void test(){
	int n;cin>>n;
	long long a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]) b[i]=max(b[i],b[j]+a[i]);
		}
	}
	sort(b,b+n);
	cout<<b[n-1];
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
