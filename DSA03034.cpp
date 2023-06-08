#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n), b(m), c(k);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    for (auto &i : c) cin >> i;

    vector<long long> res;
    int i = 0, j = 0, z = 0;
    while (i < n && j < m && z < k) {
        if (a[i] == b[j] && a[i] == c[z]) {
            res.push_back(a[i]);
            i++, j++, z++;
        }
        else if (a[i] < b[j]) i++;
        else if (b[j] < c[z]) j++;
        else z++;
    }
    
    if (res.empty()) cout <<"NO";
    else {
        for (auto i : res) {
            cout << i << " ";
        }
    }
}

int main() {
    int t = 1; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
