#include<bits/stdc++.h>
using namespace std;
int a[1001];
vector<int> v[1001];

void bfs(int u){
	queue<int> q;
	q.push(u);
	a[u]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		cout<<x<<" ";
		for(int i=0;i<v[x].size();i++){
			if(!a[v[x][i]]){
				q.push(v[x][i]);
				a[v[x][i]]=1;
			}
		}
	}
}

void nhap(){
	int n,m,u;cin>>n>>m>>u;
	for(int i=1;i<=n;i++) v[i].clear();
	memset(a,0,sizeof(a));
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
	}
	bfs(u);
}

main(){
	int t;cin>>t;
	while(t--){
		nhap();
		cout<<endl;	
	}
}
