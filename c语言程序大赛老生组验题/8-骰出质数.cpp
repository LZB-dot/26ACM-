//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<climits>
//#include<bitset>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MOD = 1e9 + 7;
//const ll INF = 1e18;
//const int MAXN = 1010;
//const int MAXM = 6010;
//
//int dp[MAXN][MAXM];
//bool is[MAXM];
//
//void init() {
//    dp[0][0] = 1;
//
//    for (int i = 1; i < MAXN; ++i) {
//        for (int j = 1; j < MAXM; ++j) {
//            ll sum = 0;
//
//            for (int k = 1; k <= 6; ++k) {
//                if (j - k >= i - 1)
//                    sum += dp[i - 1][j - k];
//            }
//
//            dp[i][j] = sum % MOD;
//        }
//    }
//
//    fill(is, is + MAXM, true);
//    is[0] = is[1] = false;
//
//    for (int i = 2; i * i < MAXM; ++i) {
//        if (is[i]) {
//            for (int j = i * i; j < MAXM; j += i)
//                is[j] = false;
//        }
//    }
//
//}
//
//void solve() {
//    int n;
//    cin >> n;
//
//    if (n == 1) {
//        cout << "3\n";
//        return;
//    }
//
//    ll ans = 0;
//    for (int j = n; j <= 6 * n; ++j) {
//        if (is[j]) 
//            ans = (ans + dp[n][j]) % MOD;
//        
//    }
//
//    cout << ans << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    init();
//
//    ll T;
//    cin >> T;
//
//    while (T--)
//        solve();
//
//    return 0;
//}