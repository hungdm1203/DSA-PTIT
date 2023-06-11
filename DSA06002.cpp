#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		multimap<int,int> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m.insert({abs(k-a[i]),a[i]});
		}
		for(multimap<int,int>::iterator it=m.begin();it!=m.end();it++){
			cout<<(*it).second<<" ";
		}
		cout<<endl;
	}
}

