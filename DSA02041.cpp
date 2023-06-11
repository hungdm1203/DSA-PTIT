#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		queue<pair<int,int>> q;
		if(n%2==0) q.push({n/2,1});
		if(n%3==0) q.push({n/3,1});
		q.push({n-1,1});
		while(!q.empty()){
			pair<int,int> p=q.front();
			q.pop();
			if(p.first%2==0){
				if(p.first/2==1){
					cout<<p.second+1;
					break;
				} else q.push({p.first/2,p.second+1});
			}
			if(p.first%3==0){
				if(p.first/3==1){
					cout<<p.second+1;
					break;
				} else q.push({p.first/3,p.second+1});
			}
			if(p.first-1==1){
				cout<<p.second+1;
				break;
			} else q.push({p.first-1,p.second+1});
		}
		cout<<endl;
	}
}
