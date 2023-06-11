#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m;cin>>n>>m;
	long long p=0,q=0;
	int k=0;
	while(n>0||m>0){
		int x=n%10;
		int y=m%10;
		if(x==5) x=6;
		if(y==5) y=6;
		if(n>0) p=p+x*pow(10,k);
		if(m>0) q=q+y*pow(10,k);
		n/=10;
		m/=10;
		k++;
	}
	long long tmax=q+p;
	k=0;
	while(p>0||q>0){
		int x=p%10;
		int y=q%10;
		if(x==6) x=5;
		if(y==6) y=5;
		if(p>0) n=n+x*pow(10,k);
		if(q>0) m=m+y*pow(10,k);
		p/=10;
		q/=10;
		k++;
	}
	cout<<n+m<<" "<<tmax;
}

