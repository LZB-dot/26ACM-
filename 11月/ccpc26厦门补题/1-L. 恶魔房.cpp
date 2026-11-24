
//对于后续有给魂心的 且魂心大于3的应该用于前面不给魂心的 然后剩余的继续在跑

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define pll pair<ll,ll>
typedef long long ll;

void solve() {
    int n;
    ll r, s;
    cin >> n >> r >> s;

    vector<pll>ab(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> ab[i].first >> ab[i].second;
    }

    sort(ab.begin() + 1, ab.end(), [](const pll& a, const pll& b) {
        if (a.second == b.second)
            return a.first > b.first;

        return a.second < b.second;
        });

    int st = n + 1;
    for (int i = 1; i <= n; ++i) {
        if (ab[i].second != 0) {
            st = i;
            break;
        }
    }

    ll cnt = 0;
    if (s > 0)
        cnt = r + (s - 1) / 3;
    else
        cnt = max(0LL, r - 1);

    ll ans = 0;

    for (int i = st; i <= n; ++i) {
        ans += ab[i].first;
        cnt += (ab[i].second - 1) / 3;
    }

    for (int i = 1; i < st && cnt > 0; ++i) {
        ans += ab[i].first;
        --cnt;
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();

    return 0;
}
