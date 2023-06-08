#include<bits/stdc++.h>
using namespace std;
int a[1001],parent[1001];
vector<int> v[1001];
vector<int> check;

void bfs(int u){
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
				parent[v[x][i]]=x;
			}
		}
	}
}

main(){
	int t;cin>>t;
	while(t--){
		int n,m,t,s;cin>>n>>m>>t>>s;
		memset(a,0,sizeof(a));
		memset(parent,0,sizeof(parent));
		for(int i=0;i<m;i++){
			int x,y;cin>>x>>y;
			v[x].push_back(y);
		}
		bfs(t);
		if(!a[s]){
			cout<<-1<<endl;
		} else{
			while(s!=t){
				check.push_back(s);
				s=parent[s];
			}
			check.push_back(t);
			for(int i=check.size()-1;i>=0;i--) cout<<check[i]<<" ";
			cout<<endl;
		}
		for(int i=1;i<=n;i++) v[i].clear();
		check.clear();
	}
}
