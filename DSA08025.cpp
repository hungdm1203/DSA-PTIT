#include<bits/stdc++.h>
using namespace std;
int dx[8]={-2,-2,-1,-1,1,1,2,2};
int dy[8]={-1,1,-2,2,-2,2,-1,1};
void test(){
	string s1,s2;cin>>s1>>s2;
	queue<pair<string,int>> q;
	if(s1==s2){
		cout<<0;
		return;
	}
	q.push({s1,0});
	int dem=1e9+7;
	while(!q.empty()){
		pair<string,int> p=q.front();
		q.pop();
		if(p.first==s2){
			dem=min(dem,p.second);
			break;
		}
		for(int i=0;i<8;i++){
			string ss=p.first;
			ss[0]=ss[0]+dy[i];
			ss[1]=ss[1]+dx[i];
			if(ss[0]>='a'&&ss[0]<='h'&&ss[1]>='1'&&ss[1]<='8') q.push({ss,p.second+1});
		}
	}
	cout<<dem;
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
