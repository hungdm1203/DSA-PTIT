#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		queue<int> q;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			if(x==1) cout<<q.size()<<endl;
			if(x==2&&q.size()!=0) cout<<"NO\n";
			if(x==2&&q.size()==0) cout<<"YES\n";
			if(x==3){
				int y;cin>>y;
				q.push(y);
			}
			if(x==4&&q.size()!=0) q.pop();
			if(x==5&&q.size()!=0) cout<<q.front()<<endl;
			if(x==5&&q.size()==0) cout<<-1<<endl;
			if(x==6&&q.size()!=0) cout<<q.back()<<endl;
			if(x==6&&q.size()==0) cout<<-1<<endl;
		}
	}
} 
