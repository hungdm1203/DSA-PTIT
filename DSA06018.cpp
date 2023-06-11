#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		set<int> s;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		sort(a,a+n);
		cout<<a[n-1]-a[0]+1-s.size()<<endl;
	}
}

