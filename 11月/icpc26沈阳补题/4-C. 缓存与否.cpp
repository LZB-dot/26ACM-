////
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<queue>
////#include<unordered_map>
////
////using namespace std;
////
////typedef long long ll;
////
////const ll INF = 1e18;
////
////void solve() {
////    int n, m, a, b, c;
////    cin >> n >> m >> a >> b >> c;
////
////    vector<int>num(n + 1, 0);
//// 
////    for (int i = 1; i <= n; ++i) 
////        cin >> num[i];
////
////
////    if (a <= b) {
////        ll ans =1LL* n * a;
////        cout << ans << "\n";
////        return;
////    }
////
////    //i最近使用地址，j最久未使用地址
////    vector<vector<ll>>dp(m + 1, vector<ll>(m + 1, INF));
////
////    dp[0][0] = 0;
////
////    for (int k = 1; k <= n; ++k) {
////        int x = num[k];
////
////        vector<vector<ll>>ndp(m + 1, vector<ll>(m + 1, INF));
////
////        for (int i = 0; i <= m; ++i) {
////            for (int j = 0; j <= m; ++j) {
////                if (dp[i][j] == INF)
////                    continue;
////
////                if (i == j && i != 0)
////                    continue;
////
////                ndp[i][j] = min(ndp[i][j], dp[i][j] + a);
////
////                if (x == i)
////                    ndp[i][j] = min(ndp[i][j], dp[i][j] + b);
////                else if (x == j)
////                    ndp[j][i] = min(ndp[j][i], dp[i][j] + b);
////                else 
////                    ndp[x][i] = min(ndp[x][i], dp[i][j] + c);
////                
////            }
////        }
////
////        dp.swap(ndp);
////    }
////
////    ll ans = INF;
////
////    for (int i = 0; i <= m; ++i) 
////        for (int j = 0; j <= m; ++j) 
////            ans = min(ans, dp[i][j]);
////        
////    cout << ans << "\n";
////}
////
////int main() {
////    ios::sync_with_stdio(false);
////    cin.tie(nullptr);
////
////    int T;
////    cin >> T;
////
////    while (T--)
////         solve();
////
////    return 0;
////}
//
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//#include<unordered_map>
//
//using namespace std;
//
//typedef long long ll;
//
//const ll INF = 1e18;
//
//void solve() {
//    int n, m, a, b, c;
//    cin >> n >> m >> a >> b >> c;
//
//    vector<int>num(n + 1, 0);
//
//    for (int i = 1; i <= n; ++i)
//        cin >> num[i];
//
//    if (a <= b) {
//        cout << 1LL * n * a << "\n";
//        return;
//    }
//
//    // i最近使用地址，j最久未使用地址
//    vector<vector<ll>>dp(m + 1, vector<ll>(m + 1, INF));
//
//    // 实际遍历只有第x行会发生缓存的更改，其余行都是加a
//    // 每一行的懒标记
//    vector<ll>lazy(m + 1, 0);
//
//    // 对于第x行 如果缓存未命中 那就是这一行min(dp[i][j])+c
//    // i!=j i!=x
//    // 每一行维护最小值和次小值
//    vector<pair<ll, int>>mi1(m + 1, { INF, -1 });
//    vector<pair<ll, int>>mi2(m + 1, { INF, -1 });
//
//    dp[0][0] = 0;
//
//    // 重新计算第 x 行的最小值和次小值
//    auto update = [&](int x) {
//        mi1[x] = { INF, -1 };
//        mi2[x] = { INF, -1 };
//
//        for (int j = 0; j <= m; ++j) {
//            if (j == x || dp[x][j] == INF)
//                continue;
//
//            ll val = dp[x][j];
//
//            if (val < mi1[x].first) {
//                mi2[x] = mi1[x];
//                mi1[x] = { val, j };
//            }
//            else if (val < mi2[x].first) {
//                mi2[x] = { val, j };
//            }
//        }
//        };
//
//    update(0);
//
//    for (int k = 1; k <= n; ++k) {
//        int x = num[k];
//
//        vector<ll>tmp(m + 1, INF);
//
//        // 计算新状态 dp[x][i]
//        for (int i = 0; i <= m; ++i) {
//            if (i == x)
//                continue;
//
//            // 原状态 dp[x][i]：命中最近使用的地址
//            if (dp[x][i] != INF) 
//                tmp[i] = min(tmp[i], dp[x][i] + lazy[x] + b);
//            
//
//            if (i == 0) {
//                // 空缓存，只能从 dp[0][0] 转移
//                if (dp[0][0] != INF) 
//                    tmp[i] = min(tmp[i], dp[0][0] + lazy[0] + c);
//                
//            }
//            else {
//                // 原状态 dp[i][x]：命中最久未使用的地址
//                if (dp[i][x] != INF) 
//                    tmp[i] = min(tmp[i], dp[i][x] + lazy[i] + b);
//                
//
//                // 未命中：查询第 i 行排除 x 后的最小值
//                pair<ll, int> p = mi1[i];
//
//                if (p.second == x)
//                    p = mi2[i];
//
//                if (p.first != INF) 
//                    tmp[i] = min(tmp[i], p.first + lazy[i] + c);
//                
//            }
//        }
//
//        // 所有行先增加 a
//        for (int i = 0; i <= m; ++i)
//            lazy[i] += a;
//
//        // 第 x 行实际只需要增加 b
//        lazy[x] += b - a;
//
//        // 更新第 x 行的 DP 值
//        for (int i = 0; i <= m; ++i) {
//            if (i == x)
//                continue;
//
//            if (tmp[i] == INF)
//                dp[x][i] = INF;
//            else
//                dp[x][i] = tmp[i] - lazy[x];
//        }
//
//        // 重新计算第 x 行的最小值和次小值
//        update(x);
//    }
//
//    ll ans = dp[0][0] + lazy[0];
//
//    for (int i = 1; i <= m; ++i) 
//        if (mi1[i].first != INF) 
//            ans = min(ans, mi1[i].first + lazy[i]);
//
//
//    cout << ans << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int T;
//    cin >> T;
//
//    while (T--)
//        solve();
//
//    return 0;
//}
