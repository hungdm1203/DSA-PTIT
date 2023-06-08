#include<bits/stdc++.h>
using namespace std;
int a[1001],parent[1001];
vector<int> v[1001];

void dfs(int u){
	a[u]=1;
	for(auto i:v[u]){
		if(!a[i]){
			parent[i]=u;
			dfs(i);
		}
	}
}

void test(){
	int n,m,t,s;cin>>n>>m>>t>>s;
	memset(a,0,sizeof(a));
	memset(parent,0,sizeof(parent));
	for(int i=1;i<=n;i++) v[i].clear();
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(t);
	vector<int> path;
	if(a[s]) {
		while(t!=s){
			path.push_back(t);
			t=parent[t];
		}
		path.push_back(s);
		for(int i=path.size()-1;i>=0;i--) cout<<path[i]<<" ";
	} else {
		cout<<-1;
	}
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
