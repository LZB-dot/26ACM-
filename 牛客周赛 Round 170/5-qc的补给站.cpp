//
//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<climits>
//#include<algorithm>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 2e5 + 10;
//
//ll n;
//ll a[MAXN];
//ll b[MAXN];
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    cin >> n;
//
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//
//        ll L = i - a[i];
//        ll R = i + a[i];
//
//        if (L >= 1)
//            b[L] = b[L] == 0 ? R : min(R, b[L]);
//    }
//
//    ll ans = 0;
//    ll pre = LLONG_MAX;
//
//    for (int i = n; i >= 1; --i) {
//        if (b[i] != 0)
//            pre = min(pre, b[i]);
//
//        ll r = min(n, pre - 1);
//
//        if (r >= i)
//            ans += r - i + 1;
//    }
//
//    cout << ans << "\n";
//
//    return 0;
//}
