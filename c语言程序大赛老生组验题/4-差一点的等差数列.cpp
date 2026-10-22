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
//const ll INF = 1e18;
//
//void solve() {
//    ll n;
//    cin >> n;
//
//    vector<ll>a(n + 1, 0);
//    for (ll i = 1; i <= n; ++i)
//        cin >> a[i];
//
//    if (n == 1) {
//        cout << "0\n";
//        return;
//    }
//
//    vector<pair<ll,ll>>d;
// 
//    for (ll i = -1; i <= 1; ++i)
//        for (ll j = -1; j <= 1; ++j) {
//            ll diff = a[2] + j - (a[1] + i);
//            d.emplace_back(a[1] + i, diff);
//        }
//
//    ll m = d.size();
//    vector<ll>ans(m, 0);
//    for (ll i = 0; i < m; ++i) {
//        ll s = d[i].first;
//        ll diff = d[i].second;
//
//        for (ll j = 1; j <= n; ++j) {
//            ll tmp = s + (j - 1) * diff;
//
//            if (abs(a[j] - tmp) > 1) {
//                ans[i] = INF;
//                break;
//            }
//            
//            if (a[j] != tmp)
//                ans[i]++;
//        }
//    }
//
//    ll res = INF;
//
//    for (ll i = 0; i < m; ++i)
//        res = min(res, ans[i]);
//
//    if (res == INF)
//        cout << "-1\n";
//    else
//        cout << res << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    //ll T;
//    //cin >> T;
//
//    //while (T--)
//        solve();
//
//    return 0;
//}