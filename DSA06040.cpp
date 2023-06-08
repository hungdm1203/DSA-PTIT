#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int x,y,z;cin>>x>>y>>z;
		long long a[x],b[y],c[z];
		set<long long> s1,s2,s3;
		for(int i=0;i<x;i++){
			cin>>a[i];
			s1.insert(a[i]);
		}
		for(int i=0;i<y;i++){
			cin>>b[i];
			if(s1.find(b[i])!=s1.end()) s2.insert(b[i]);
		}
		for(int i=0;i<z;i++) cin>>c[i];
		sort(c,c+z)
		int w=0;
		for(int i=0;i<z;i++){
			if(s2.find(c[i])!=s2.end()){
				s3.insert(c[i]);
				w++;
			}
		}
		for(set<long long>::iterator it=s3.begin();it!=s3.end();it++) cout<<*it<<" ";
		if(w==0) cout<<-1<<endl; else cout<<endl;
	}
}
