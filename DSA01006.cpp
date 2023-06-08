#include<bits/stdc++.h>
using namespace std;
int n,a[100000],ok;

void ktao(){
	for(int i=1;i<=n;i++) a[i]=n-i+1;
}

void sinh(){
	int i=n-1;
	while(i>=1&&a[i]<a[i+1]){
		i--;
	}
	if(i>=1){
		for(int j=n;j>i;j--){
			if(a[j]<a[i]){
				swap(a[i],a[j]);
				reverse(a+i+1,a+n+1);// lat nguoc mang tu vi tri i+1 den n+1
				break;
			}
		}
	} else ok=0;
}

void in(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		ktao();
		while(ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}
