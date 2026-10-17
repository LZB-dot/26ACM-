//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MOD = 1e9 + 7;
//const int MAXM = 2000005;
//
//ll fac[MAXM], inv[MAXM];
//
//ll qpow(ll a, ll b) {
//    ll res = 1;
//    while (b > 0) {
//
//        if (b & 1)
//            res = res * a % MOD;
//
//        a = a * a % MOD;
//
//        b >>= 1;
//    }
//    return res;
//}
//
//void init() {
//
//    fac[0] = 1;
//    for (int i = 1; i < MAXM; ++i) 
//        fac[i] = 1LL * i * fac[i - 1] % MOD;
//    
//    inv[MAXM - 1] = qpow(fac[MAXM - 1], MOD - 2);
//
//    for (int i = MAXM - 1; i >= 1; --i) 
//        inv[i - 1] = 1LL * i * inv[i] % MOD;
//    
//}
//
//void solve() {
//    int x, y;
//    cin >> x >> y;
//
//    x = abs(x) + 1;
//    y = abs(y) + 1;
//
//    ll ans = fac[x + y] * inv[x] % MOD;
//
//    ans = ans * inv[y] % MOD;
//    ans = (ans - 1 + MOD) % MOD; 
//
//    cout << ans << '\n';
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    init();
//
//    int T;
//    cin >> T;
//
//    while (T--) 
//        solve();
//    
//    return 0;
//}
