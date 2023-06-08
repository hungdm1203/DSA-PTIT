#include<bits/stdc++.h>
using namespace std;
int a[10001];
vector<int> v[10001];

void dfs(int u){
	cout<<u<<" ";
	a[u]=1;
	for(int i=0;i<v[u].size();i++){
		if(!a[v[u][i]]) dfs(v[u][i]);
	}
}

void nhap(){
	int n,m,u;cin>>n>>m>>u;
	memset(a,0,sizeof(a));
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
	}	 
	dfs(u);
	for(int i=1;i<=n;i++) v[i].clear();
}

main(){
	int t;cin>>t;
	while(t--){
		nhap();
		cout<<endl;
	} 
}
