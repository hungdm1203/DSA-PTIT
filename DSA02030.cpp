#include<bits/stdc++.h>
using namespace std;
int n;
char a[1001],c;

void check(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<endl;
}

void Try(int i,char x){
	for(char j=x;j<=c;j++){
		a[i]=j;
		if(i==n) check(); else Try(i+1,j);
	}
}

main(){
	cin>>c>>n;
	Try(1,'A');
}
