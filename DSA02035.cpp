#include<bits/stdc++.h>
using namespace std;
int n,k,v[1001],vs[1001];
string a[1001],b[1001];
int c=1e9+7;

void solve(){
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			b[i][j]=a[i][v[j]];
		}
	}
	sort(b,b+n);
	int mi=stoi(b[0]);
	int ma=stoi(b[n-1]);
	c=min(c,ma-mi);
}
void Try(int i){
	for(int j=0;j<k;j++){
		if(!vs[j]){
			vs[j]=1;
			v[i]=j;
			if(i==k-1) solve(); else Try(i+1);
			vs[j]=0;
		}
	}
}
main(){
	cin>>n>>k;
	memset(vs,0,sizeof(vs));
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	Try(0);
	cout<<c;
}
