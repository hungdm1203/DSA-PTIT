#include<bits/stdc++.h>
using namespace std;
int c=1e9+7;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		priority_queue<int,vector<int>,greater<int>> q;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			q.push(x);
		}
		long long sum=0;
		while(q.size()>=2){
			long long x=q.top();
			q.pop();
			long long y=q.top();
			q.pop();
			sum=sum+x+y;
			sum=sum%c;
			q.push((x+y)%c);
		}
		cout<<sum<<endl;
	}
}

