#include<bits/stdc++.h>
using namespace std;
void test(){
	int n,m;cin>>n>>m;
	int a[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j];
	}
	queue<vector<int>> q;
	vector<int> v;
	v.push_back(a[1][1]);v.push_back(1);v.push_back(1);v.push_back(0);
	q.push(v);
	v.clear();
	int dem=1e9+7;
	while(!q.empty()){
		v=q.front();
		q.pop();
		if(v[0]==a[n][m]&&v[1]==n&&v[2]==m){
			dem=min(dem,v[3]);break;
		}
		vector<int> y;
		if(v[2]+a[v[1]][v[2]]<=m&&v[2]+a[v[1]][v[2]]>=1){
			y.push_back(a[v[1]][v[2]+a[v[1]][v[2]]]);
			y.push_back(v[1]);
			y.push_back(v[2]+a[v[1]][v[2]]);
			y.push_back(v[3]+1);
			q.push(y);
		}
		y.clear();
		if(v[1]+a[v[1]][v[2]]<=n&&v[1]+a[v[1]][v[2]]>=1){
			y.push_back(a[v[1]+a[v[1]][v[2]]][v[2]]);
			y.push_back(v[1]+a[v[1]][v[2]]); 
			y.push_back(v[2]); 
			y.push_back(v[3]+1);
			q.push(y);
		}
	}
	if(dem!=1e9+7) cout<<dem; else cout<<-1;
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
