#include<bits/stdc++.h>
using namespace std;
int a[201],n,p,s;
vector<long long> v;
vector<vector<long long>> vs;
void sang(){
	memset(a,1,sizeof(a));
	a[0]=a[1]=0;
	for(int i=2;i<201;i++){
		if(a[i]){
			for(int j=i*i;j<201;j=j+i) a[j]=0;
		}
	}
	for(int i=0;i<201;i++){
		if(a[i]) v.push_back(i);
	}
}
void Try(int x,int sum,vector<long long> vv){
	if(vv.size()==n&&sum==s){
		vs.push_back(vv);
		return;
	}
	if(sum>s||vv.size()>n) return;
	for(int i=x;i<v.size();i++){
		if(v[i]>p){
			vv.push_back(v[i]);
			Try(i+1,sum+v[i],vv);
			vv.pop_back();
		}
	}
}
main(){
	int t;cin>>t;
	sang();
	while(t--){
		vs.clear();
		cin>>n>>p>>s;
		Try(0,0,{});
		cout<<vs.size()<<endl;
		for(auto i:vs){
			for(auto j:i) cout<<j<<" ";
			cout<<endl;
		}
	}
}
