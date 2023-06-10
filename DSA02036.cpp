#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001],n;
vector<vector<int>> vs;

bool cmp(int x,int y){
	return x>y;
}

void solve(){
	int sum=0;
	for(int i=0;i<n;i++){
		if(b[i]) sum=sum+a[i];
	}
	if(sum%2!=0){
		vector<int> v;
		for(int i=0;i<n;i++){
			if(b[i]) v.push_back(a[i]);
		}
		vs.push_back(v);
	}
}

void Try(int i){
	for(int j=0;j<=1;j++){
		b[i]=j;
		if(i==n-1) solve(); else Try(i+1);
	}
}
main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		vs.clear();
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,cmp);
		Try(0);
		for(auto i:vs){
			for(auto j:i) cout<<j<<" ";
			cout<<endl;
		}
	}
}
