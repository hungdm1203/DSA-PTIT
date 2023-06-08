#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		priority_queue<int,vector<int>,greater<int>> pq;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			pq.push(x);
		}
		long long sum=0;
		while(pq.size()>=2){
			long long x=pq.top();
			pq.pop();
			long long y=pq.top();
			pq.pop();
			sum=sum+x+y;
			pq.push(x+y);
		}
		cout<<sum<<endl;
	}
}

//2 3 4 6
//4 5 6
//6 9
//15




