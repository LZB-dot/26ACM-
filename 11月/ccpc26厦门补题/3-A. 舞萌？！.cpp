//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//#define pll pair<ll,ll>
//#define pii pair<int,int>
//typedef long long ll;
//
//
//void solve() {
//    int n;
//    cin >> n;
//
//    ll y;
//    cin >> y;
//
//    string s;
//    cin >> s;
//    s = " " + s;
//
//    int i = 0, e = 0;
//    int lastE = -1;
//
//    for (int k = 1; k <= n; ++k) {
//        if (s[k] == 'I')
//            ++i;
//        else if (s[k] == 'E') {
//            ++e;
//            lastE = k;
//        }
//    }
//
//    if (e == 0) {
//        cout << "Same\n";
//        return;
//    }
//
//    if (e % 2 == 0) {
//        ll sum = 1LL*(e / 2) * 4 + 3 * i;
//
//        if (y <= sum + 3)
//            cout << "Same\n";
//        else
//            cout << "E\n";
//        return;
//    }
//
//    ll sum = 0;
//    sum += 1LL * (e / 2) * 4;
//    sum += 1LL * (lastE - e) * 3;
//    if (sum >= y) {
//        cout << "Same\n";
//        return;
//    }
//
//    cout << "E\n";
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
