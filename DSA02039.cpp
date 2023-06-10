#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> vs;

void Try(int n,int sum,vector<int> v){
	if(sum==0){
		vs.push_back(v);
		return;
	}
	for(int i=n;i>=1;i--){
		if(sum>=i){	
			v.push_back(i);
			Try(i,sum-i,v);
			v.pop_back();
		}
	}
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		vs.clear();
		Try(n,n,{});
		cout<<vs.size()<<endl;
		for(int i=0;i<vs.size();i++){
			cout<<"(";
			for(int j=0;j<vs[i].size()-1;j++) cout<<vs[i][j]<<" ";
			cout<<vs[i].back()<<") ";
		}
		cout<<endl;
	}
}
