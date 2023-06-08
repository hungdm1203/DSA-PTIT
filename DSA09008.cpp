#include<bits/stdc++.h>
using namespace std;
int a[10001],dem;
vector<int> v[10001];

void dfs(int u){
	a[u]=1;
	for(int i=0;i<v[u].size();i++){
		if(!a[v[u][i]]){
			dfs(v[u][i]);
		}
	}
}

void bfs(int u){
	queue<int> q;
	q.push(u);
	a[u]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<v[x].size();i++){
			if(!a[v[x][i]]){
				a[v[x][i]]=1;
				q.push(v[x][i]);
			}
		}
	}
}

void nhap(){
	int n,m;cin>>n>>m;
	memset(a,0,sizeof(a));
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}	
	dem=0;
	for(int i=1;i<=n;i++){
		if(!a[i]){
			dem++;
			dfs(i);
		}
	}
	cout<<dem;
	for(int i=1;i<=n;i++) v[i].clear();
}

main(){
	int t;cin>>t;
	while(t--){
		nhap();
		cout<<endl;
	} 
}
