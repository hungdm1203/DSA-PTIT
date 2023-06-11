#include<bits/stdc++.h>
using namespace std;
int a[1001];
vector<int> v[1001];
vector<pair<int,int>> tree;

void tree_dfs(int u){
	a[u]=1;
	for(int i=0;i<v[u].size();i++){
		if(!a[v[u][i]]){
			tree.push_back({u,v[u][i]});
			tree_dfs(v[u][i]);
		}
	}
}

void tree_bfs(int u){
	queue<int> q;
	q.push(u);
	a[u]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<v[x].size();i++){
			if(!a[v[x][i]]){
				q.push(v[x][i]);
				a[v[x][i]]=1;
				tree.push_back({x,v[x][i]}); 
			}
		}
	}
}

void nhap(){
	int n,m,u;cin>>n>>m>>u;
	memset(a,0,sizeof(a));
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	tree_dfs(u);
	if(tree.size()==n-1){
		for(int i=0;i<tree.size();i++) cout<<tree[i].first<<" "<<tree[i].second<<endl;
	} else cout<<-1<<endl;
	for(int i=1;i<=n;i++) v[i].clear();
	tree.clear();
}

main(){
	int t;cin>>t;
	while(t--){
		nhap();
	}
}
