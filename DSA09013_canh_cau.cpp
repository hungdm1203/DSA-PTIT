#include<bits/stdc++.h>
using namespace std;
int vs[1001],n,m,x,y;
vector<int> adj[1001];
vector<pair<int,int>> v;
void dfs(int u){
	vs[u]=1;
	for(auto i:adj[u]){
		if((u==x&&i==y)||(u==y&&i==x)) continue;
		if(!vs[i]) dfs(i);
	}
}
void test(){
	cin>>n>>m;
	memset(vs,0,sizeof(vs));
	for(int i=1;i<=n;i++) adj[i].clear();
	v.clear();
	while(m--){
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		v.push_back({x,y});
	}
	x=y=0;
	int tplt=0;
	for(int i=1;i<=n;i++){
		if(!vs[i]){
			dfs(i);
			tplt++;
		}
	}
	for(int i=0;i<v.size();i++){
		int lt=0;
		x=v[i].first;
		y=v[i].second;
		memset(vs,0,sizeof(vs));
		for(int i=1;i<=n;i++){
			if(!vs[i]){
				dfs(i);
				lt++;
			}
		}
		if(lt>tplt) cout<<x<<" "<<y<<" ";
	}
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
