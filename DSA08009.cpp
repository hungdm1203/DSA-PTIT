#include<bits/stdc++.h>
using namespace std;

void test(){
	int s,t;cin>>s>>t;
	if(s>=t){
		cout<<s-t;
		return;
	}
	queue<pair<int,int>> q;
	set<int> st;
	q.push({s-1,1});
	q.push({s*2,1});
	st.insert(s-1);
	st.insert(s*2);
	while(!q.empty()){
		pair<int,int> p=q.front();
		if(p.first-1==t||p.first*2==t){
			cout<<p.second+1;
			break;
		} else{
			q.pop();
			if(p.first>=1&&st.find(p.first-1)==st.end()){
				q.push({p.first-1,p.second+1});
				st.insert(p.first-1);
			}
			if(p.first*2<t*2&&st.find(p.first*2)==st.end()){
				q.push({p.first*2,p.second+1});
				st.insert(p.first*2);
			}
		}
	}
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
