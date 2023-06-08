#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n);
		vector<vector<int>> v;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			int c=1;
			for(int j=0;j<n-1;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					c=0;
				}
			}
			if(c==1) break;
			v.push_back(a);
		}
		for(int i=v.size()-1;i>=0;i--){
			cout<<"Buoc "<<i+1<<": ";
			for(int j=0;j<n;j++) cout<<v[i][j]<<" ";
			cout<<endl;
		}
	}
}
