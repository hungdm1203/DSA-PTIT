#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.first==b.first) return a.second>b.second;
	return a.second>b.second;
}
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			int x,y,z;cin>>x>>y>>z;
			v.push_back({y,z});
		}
		sort(v.begin(),v.end(),cmp);
		int a[1001];
		memset(a,0,sizeof(a));
		long long sum=0,x=0;
		for(int i=0;i<v.size();i++){
			for(int j=v[i].first;j>0;j--){
				if(!a[j]){
					x++;
					a[j]=1;
					sum+=v[i].second;
					break;
				}
			}
		}
		cout<<x<<" "<<sum<<endl;
	}
}

