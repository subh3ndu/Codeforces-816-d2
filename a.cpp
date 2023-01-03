#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Crossmarket

void solve(int tt) {
    int n, m;
    cin >> n >> m;
    cout << n + m + min(n, m) - 3 + min(max(n, m) - 1, 1) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        solve(test);
        cout << "\n";
    }

    return 0;
}
