////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<cstring> 
////#include<queue>
////#include<unordered_map>
////#include<climits>
////#include<bitset>
////
////using namespace std;
////
////typedef long long ll;
////
////const int MOD = 1e9 + 7;
////const ll INF = 1e18;
////
////const int MAXN = 110;
////const int MAXM = 5010;
////
////int dp[MAXN][MAXM];
////
////struct Candy {
////    int a, b, c;
////};
////
////void solve() {
////    int n, k;
////    cin >> n >> k;
////
////    vector<Candy>candy(n + 1);
////    for (int i = 1; i <= n; ++i)
////        cin >> candy[i].a >> candy[i].b >> candy[i].c;
////
////    memset(dp, -1, sizeof(dp));
////
////    dp[0][0] = 0;
////    for (int i = 1; i <= n; ++i) {
////
////        for (int j = 0; j <= k; ++j) {
////            dp[i][j] = dp[i - 1][j];
////
////            for (int z = 1; z <= candy[i].b && z * candy[i].c <= j; ++z) {
////                int pre = j - z * candy[i].c;
////                if (dp[i - 1][pre] != -1)
////                    dp[i][j] = max(dp[i][j], dp[i - 1][pre] + z * candy[i].a);
////            }
////        }
////    }
////
////    int ans = 0;
////    for (int j = 0; j <= k; ++j)
////        if (dp[n][j] != -1)
////            ans = max(ans, dp[n][j]);
////
////    cout << ans << "\n";
////}
////
////int main() {
////    ios::sync_with_stdio(false);
////    cin.tie(nullptr);
////
////
////    //ll T;
////    //cin >> T;
////
////    //while (T--)
////    solve();
////
////    return 0;
////}
//
//
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
//
//const int MAXN = 110;
//const int MAXM = 5010;
//
//int dp[MAXM];
//
//struct Candy{
//    int a, c;
//};
//
//void solve() {
//    int n, k;
//    cin >> n >> k;
//
//    vector<Candy>candy;
//    for (int i = 1; i <= n; ++i) {
//        int a, b, c;
//        cin >> a >> b >> c;
//
//        int tmp = b;
//
//        for (int j = 1; j <= tmp; (j <<= 1)) {
//            tmp -= j;
//            candy.push_back({ a * j,c * j });
//        }
//
//        if (tmp > 0)
//            candy.push_back({ a * tmp,c * tmp });
//
//    }
//
//    memset(dp, -1, sizeof(dp));
//
//    dp[0] = 0;
//    for (int i = 0; i < candy.size(); ++i) {
//        for (int j = k; j >= candy[i].c; --j) {
//            if (dp[j - candy[i].c] != -1)
//                dp[j] = max(dp[j], dp[j - candy[i].c] + candy[i].a);
//        }
//    }
//
//    int ans = 0;
//    for (int j = 0; j <= k; ++j)
//        if (dp[j] != -1)
//            ans = max(ans, dp[j]);
//
//    cout << ans << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//
//    //ll T;
//    //cin >> T;
//
//    //while (T--)
//        solve();
//
//    return 0;
//}