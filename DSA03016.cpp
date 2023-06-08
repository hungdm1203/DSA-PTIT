#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int s,n;cin>>s>>n;
		int a[n];
		memset(a,0,sizeof(a));
		a[0]=1;
		int x=n-1;
		int c=1;
		if(9*n<s){
			c=0;
			cout<<-1<<endl;
		}
		while(x>=0&&c!=0){
			long long sum=0;
			for(int i=0;i<n;i++) sum+=a[i];
			while(sum!=s&&a[x]!=9){
				a[x]++;
				sum++;
			}
			x--;
		}
		if(c!=0){
			for(int i=0;i<n;i++) cout<<a[i];
			cout<<endl;
		}
	}
}
