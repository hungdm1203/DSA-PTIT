#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1000],b[1000];
vector<int> v;

void in(){
	for(int i=1;i<=k;i++) cout<<v[a[i]-1]<<" ";
	cout<<endl;
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) in(); else Try(i+1);
	}
}
main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(b,b+n);
	v.push_back(b[0]);
	for(int i=1;i<n;i++){
		if(b[i]!=v[v.size()-1]) v.push_back(b[i]);
	}
	n=v.size();
	Try(1);	
}
