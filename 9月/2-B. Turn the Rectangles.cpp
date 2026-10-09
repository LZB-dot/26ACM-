//
////https://codeforces.com/contest/1008/problem/B
//
//
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//typedef long long ll;
//
//void solve() {
//    int n;
//    cin >> n;
//
//    vector<pair<int, int>>a(n + 1);
//    for (int i = 1; i <= n; ++i) {
//        int x, y;
//        cin >> x >> y;
//        a[i] = { x,y };
//    }
//
//    a[0] = { 1e9,1e9 };
//    for (int i = 1; i <= n; ++i) {
//        int mx = max(a[i].first, a[i].second);
//        int mi = min(a[i].first, a[i].second);
//
//        if (mx <= a[i - 1].first)
//            a[i].first = mx;
//        else if (mi <= a[i - 1].first)
//            a[i].first = mi;
//        else {
//            cout << "NO\n";
//            return;
//        }
//    }
//
//    cout << "YES\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    //int T;
//    //cin >> T;
//    //while (T--)
//        solve();
//
//
//    return 0;
//}