#include<bits/stdc++.h>
using namespace std;
int a[1000],n,k;
vector<string> v;

void in(){
	for(int i=1;i<=k;i++) cout<<v[a[i]-1]<<" ";
	cout<<endl;
}

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			in();
		} else Try(i+1);
	}
}

main(){
	cin>>n>>k;
	set<string> s;
	for(int i=0;i<n;i++){
		string x; cin>>x;
		s.insert(x);
	}
	for(auto i:s){
		v.push_back(i);
	}
	n=v.size();
	Try(1);
}
