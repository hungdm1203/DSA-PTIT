#include<bits/stdc++.h>
using namespace std;
int a[1001],parent[1001];
vector<int> v[1001];
vector<int> check;

void dfs(int u){
	a[u]=1;
	for(int i=0;i<v[u].size();i++){
		if(!a[v[u][i]]){
			parent[v[u][i]]=u;
			dfs(v[u][i]);
		}
	}
}

void nhap(){
	int n,m,t,s;cin>>n>>m>>t>>s;
	memset(a,0,sizeof(a));
	memset(parent,0,sizeof(parent));
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
	}	
	dfs(t);
	if(!a[s]){
		cout<<-1;
	} else{
		while(s!=t){
			check.push_back(s);
			s=parent[s];
		}
		check.push_back(t);
		for(int i=check.size()-1;i>=0;i--) cout<<check[i]<<" ";
	}
	for(int i=1;i<=n;i++) v[i].clear();
	check.clear();
}

main(){
	int t;cin>>t;
	while(t--){
		nhap();
		cout<<endl;
	} 
}
