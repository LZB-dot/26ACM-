//
//
////https://www.luogu.com.cn/problem/P3390
//
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MOD = 1e9 + 7;
//
//ll n, k;
//
//vector<vector<ll>> mul(const vector<vector<ll>>& a, const vector<vector<ll>>& b) {
//
//
//    vector<vector<ll>> res(n + 1, vector<ll>(n + 1, 0));
//
//    for (int i = 1; i <= n; ++i) {
//        for (int k = 1; k <= n; ++k) {
//            if (a[i][k] == 0)
//                continue;
//
//            for (int j = 1; j <= n; ++j)
//                res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % MOD;
//
//        }
//    }
//
//    return res;
//}
//
//vector<vector<ll>> qpow(vector<vector<ll>> a, ll p) {
//
//    vector<vector<ll>> res(n + 1, vector<ll>(n + 1, 0));
//    for (int i = 1; i <= n; ++i)
//        res[i][i] = 1;
//
//    while (p > 0) {
//        if (p & 1)
//            res = mul(res, a);
//
//        a = mul(a, a);
//        p >>= 1;
//    }
//    return res;
//}
//
//void solve() {
//
//    cin >> n >> k;
//
//    vector<vector<ll>> g(n + 1, vector<ll>(n + 1));
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            cin >> g[i][j];
//
//            g[i][j] %= MOD;
//
//            if (g[i][j] < 0)
//                g[i][j] += MOD;
//        }
//    }
//
//    auto ans = qpow(g, k);
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n; ++j)
//            cout << ans[i][j] << " ";
//
//        cout << "\n";
//    }
//
//
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    solve();
//
//    return 0;
//}
//
