#include<bits/stdc++.h>
using namespace std;
main(){
	int n,s;
	while(cin>>n>>s){
		if(s!=0){
			int ss=s;
			int a[n];
			memset(a,0,sizeof(a));
			a[0]=1;
			s--;
			vector<int> v;
			for(int i=n-1;i>=0;i--){
				int x=min(s,9-a[i]);
				a[i]+=x;
				s-=x;
				v.push_back(a[i]);
			}
			memset(a,0,sizeof(a));
			for(int i=0;i<n;i++){
				a[i]=min(9,ss);
				ss=ss-min(9,ss);
			}
			if(s!=0) cout<<"-1 -1\n"; else{
				for(int i=n-1;i>=0;i--) cout<<v[i];
				cout<<" ";
				for(int i=0;i<n;i++) cout<<a[i];
				cout<<endl;
			}
		} else cout<<"-1 -1\n";
	}
}
