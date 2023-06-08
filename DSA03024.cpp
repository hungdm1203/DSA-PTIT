#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> v;
		vector<pair<int,int>> p;
		for(int i=0;i<n;i++){
			int x,y;cin>>x>>y;
			p.push_back({x,y});
		}
		sort(p.begin(),p.end(),cmp);
		v.push_back(p[0].first);
		int i=0;
		for(int j=1;j<n;j++){
			if(p[i].second<=p[j].first){
				i=j;
				v.push_back(p[i].first);
			}
		} 
		cout<<v.size()<<endl;
	}
}
