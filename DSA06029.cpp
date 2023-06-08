#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
	int a[n];
    vector<int> b;
    vector<vector<int>> v;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
		b.push_back(a[i]);
		sort(b.begin(),b.end());
		v.push_back(b);	
	}
	for(int i=v.size()-1;i>=0;i--){
		cout<<"Buoc "<<i<<": ";
		for(int j=0;j<=i;j++) cout<<v[i][j]<<" ";
		cout<<endl;
	}
}
