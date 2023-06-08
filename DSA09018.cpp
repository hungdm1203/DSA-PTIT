#include<bits/stdc++.h>
using namespace std;
int n,m,vs[1001];
vector<int> adj[1001];
void dfs(int u){
	vs[u]=1;
	for(auto i:adj[u]){
		if(!vs[i]) dfs(i);
	}
}
int check(int u){
	memset(vs,0,sizeof(vs));
	vs[u]=1;
	int dem=0;
	for(int i=1;i<=n;i++){
		if(!vs[i]){
			dfs(i);
			dem++;
		}
	}
	return dem;
}
void test(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) adj[i].clear();
	memset(vs,0,sizeof(vs));
	while(m--){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int stplt=0;
	for(int i=1;i<=n;i++){
		if(!vs[i]){
			dfs(i);
			stplt++;
		}
	}
	for(int i=1;i<=n;i++){
		if(check(i)>stplt) cout<<i<<" ";
	}
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
