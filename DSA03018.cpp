#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> v;
		int c=1;
		if(n%28==0){
			c=0;
			int x=n/7;
			for(int i=0;i<x;i++) cout<<7;
			cout<<endl;
		} else if(n%7==0){
			c=0;
			int x=n/7;
			for(int i=0;i<x;i++) cout<<7;
			cout<<endl;
		}
		if(c==1){
			v.push_back(4);
			n=n-4;
			while(n>=7){
				if(n%7==0){
					int x=n/7;
					n=0;
					for(int i=0;i<x;i++) v.push_back(7);
				} else {
					v.push_back(4);
					n=n-4;
				}
			}
		}
		if(c==1&&n==0){
			for(int i=0;i<v.size();i++) cout<<v[i];
			cout<<endl;
		}
		if(c==1&&n!=0) cout<<-1<<endl;
	}
}
