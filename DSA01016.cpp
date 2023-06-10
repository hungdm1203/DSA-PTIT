#include<bits/stdc++.h>
using namespace std;
void Try(int n,int m,vector<int> v){
	if(m==0){
		cout<<"(";
		for(int i=0;i<v.size()-1;i++) cout<<v[i]<<" ";
		cout<<v[v.size()-1]<<") ";
	}
	for(int i=n;i>=1;i--){
		if(m>=i){
			v.push_back(i);
			Try(i,m-i,v);
			v.pop_back();
		}
	}
}
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		Try(n,n,{});
		cout<<endl;
	}
}
