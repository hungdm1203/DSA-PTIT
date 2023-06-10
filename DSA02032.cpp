#include<bits/stdc++.h>
using namespace std;
int a[1001],n,x;
vector<vector<int>> vs;
set<int> se;


void Try(int i,int sum,vector<int> v){
	if(sum>x) return;
	if(sum==x){
		int ok=1;
		for(int i=0;i<v.size();i++){
			if(se.find(v[i])==se.end()){
				ok=0;break;
			}
		}
		if(ok) vs.push_back(v);
		return;
	}
	for(int j=i;j<=x;j++){
		if(se.find(j)!=se.end()){
			v.push_back(j);
			Try(j,sum+j,v);
			v.pop_back();
		}
	}
}
main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>x;
		se.clear();
		vs.clear();
		for(int i=1;i<=n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		Try(1,0,{});
		if(vs.size()>0){
			cout<<vs.size()<<" ";
			for(int i=0;i<vs.size();i++){
				cout<<"{";
				for(int j=0;j<vs[i].size()-1;j++) cout<<vs[i][j]<<" ";
				cout<<vs[i].back()<<"} ";
			}
		} else cout<<-1;
		cout<<endl;
	}
}
