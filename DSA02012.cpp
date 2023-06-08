#include<bits/stdc++.h>
using namespace std;
void test(){
	int n,m;cin>>n>>m;
	queue<pair<int,int>> q;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>a[i][j];
	}
	q.push({0,0});
	int dem=0;
	while(!q.empty()){
		pair<int,int> p=q.front();
		if(p.first==n-1&&p.second==m-1) dem++;
		if(p.first+1<=n-1) q.push({p.first+1,p.second});
		if(p.second+1<=m-1) q.push({p.first,p.second+1});
		q.pop();
	}
	cout<<dem;
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
