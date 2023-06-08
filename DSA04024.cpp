#include<bits/stdc++.h>
using namespace std;
long long n,k;
const int mod=1e9+7;
long long a[100][100],d[100][100];
void tich(long long a[][100],long long b[][100]){
	long long c[n][n];
	memset(c,0,sizeof(c));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for (int k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
				c[i][j]%=mod;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) a[i][j]=c[i][j];
	}
}
void Pow(long long a[][100],long long k){
	if(k==1) return;
	Pow(a,k/2);
	tich(a,a);
	if(k%2==1) tich(a,d);
}
void test(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			d[i][j]=a[i][j];
		}
	}
	Pow(a,k);
	long long sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i][n-1];
		sum%=mod;
	}
	cout<<sum<<endl;
}
main(){
	int t;cin>>t;
	while(t--){
		test();
	}
}
