#include<bits/stdc++.h>
using namespace std;
main(){
	int n;cin>>n;
	queue<int> q;
	for(int i=0;i<n;i++){
		string s;cin>>s;
		if(s=="PUSH"){
			int x;cin>>x;
			q.push(x);
		}
		if(s=="PRINTFRONT"&&q.size()!=0) cout<<q.front()<<endl;
		if(s=="PRINTFRONT"&&q.size()==0) cout<<"NONE\n";
		if(s=="POP"&&q.size()!=0) q.pop();
	}
}
