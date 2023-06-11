#include<bits/stdc++.h>
using namespace std;

main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],b[n];
		vector<int> v;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]) v.push_back(i+1);
		}
		cout<<v[0]<<" "<<v[v.size()-1]<<endl;
	}
}

