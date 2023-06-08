#include<bits/stdc++.h>
using namespace std;
int a[1000],ok,n;

void sinh(){
	int i=n-2;
	while(i>=0&&a[i]>=a[i+1]) i--;
	if(i>=0){
		for(int j=n-1;j>i;j--){
			if(a[j]>a[i]){
				swap(a[i],a[j]);
				reverse(a+i+1,a+n);
				break;
			}
		}
	} else ok=0;
}

main(){
	int t;cin>>t;
	while(t--){
		int x; cin>>x;
		string s; cin>>s;
		n=s.size();
		for(int i=0;i<s.size();i++) a[i]=s[i]-'0';
		ok=1;
		sinh();
		cout<<x<<" ";
		if(ok){
			for(int i=0;i<n;i++) cout<<a[i];
			cout<<endl;
		} else cout<<"BIGGEST\n";
	}
}
