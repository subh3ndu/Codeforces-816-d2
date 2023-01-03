#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. Beautiful Array

void solve(int tt) {
    int n, x, s, q;
    cin >> n >> x >> s >> q;
    vector<int> a(n);
    a[0] = x * s;
    q -= x * s;
    if (q < 0) cout << "-1\n";
    else {
        for (int i = 0; i < n; ++i) {
            int now = min(x - 1, q);
            a[i] += now;
            q -= now;
        }
        if (q > 0) cout << "-1\n";
        else {
            for (int i = 0; i < n; ++i) cout << a[i] << " ";
            cout << "\n";
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    for(int i=1; i<=tt; i++) {
        solve(tt);
    }

    return 0;
}
