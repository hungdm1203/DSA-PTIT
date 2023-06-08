#include<bits/stdc++.h>
using namespace std;
int n, m, u, v, res;
vector<vector<int>> G;
vector<bool> vs;

void BFS(int s) {
    int length = 1;
    queue<int> q;
    q.push(s);
    vs[s] = true;
    while (!q.empty()) {
        u = q.front(); q.pop();
        for (int v : G[u]) {
            if (!vs[v]) {
                length++;
                q.push(v);
                vs[v] = true;
            }
        }
    }
    res = max(res, length);
}

void test() {
    /* T�m tplt l?n nh?t */
    res = 0;
    cin >> n >> m;
    G.assign(n + 1, {});
    vs.assign(n + 1, false);
    for (int i = 1; i <= m; ++i) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (int i = 1; i <= n; ++i) {
        if (!vs[i]) {
            BFS(i);
        }
    }
    cout << res;
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
