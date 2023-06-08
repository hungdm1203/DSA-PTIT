#include<bits/stdc++.h>
using namespace std;
int a[1001],n,k,v[1001],dem;

void check(){
	int x=0;
	for(int i=1;i<=n;i++){
		if(v[i]==1) x+=a[i-1];
	}
	vector<int> v1;
	if(x==k){
		for(int i=1;i<=n;i++){
			if(v[i]==1) v1.push_back(a[i-1]);
		}
		cout<<"[";
		for(int i=0;i<v1.size();i++){
			if(i==v1.size()-1) cout<<v1[i]; else cout<<v1[i]<<" ";
		}
		cout<<"] ";
		dem++;
	}
	
}

void Try(int i){
	for(int j=1;j>=0;j--){
		v[i]=j;
		if(i==n) check();else Try(i+1);
	}
}
void test(){
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	dem=0;
	memset(v,0,sizeof(v));
	Try(1);
	if(!dem) cout<<-1;
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
