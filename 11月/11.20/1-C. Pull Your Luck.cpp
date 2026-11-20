//
//
////https://codeforces.com/problemset/problem/1804/C
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
//    int n, x, p;
//    cin >> n >> x >> p;
//
//
//    int cur = x;
//
//    for (int i = 1; i <= min(p, 2 * n); ++i) {
//        cur = (cur + i) % n;
//
//        if (cur == 0) {
//            cout << "YES\n";
//            return;
//        }
//    }
//
//    cout << "NO\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    //int x = 1;
//    //for (int i = 2; i <= 20; ++i) {
//    //    for (int j = 1; j <= 50; ++j) {
//    //        cout << i << "\t" << j << "\t---" << (j * (j + 1) + x) % i << "\n";
//    //    }
//    //    cout << "\n";
//    //}
//
//    int T;
//    cin >> T;
//
//    while (T--)
//        solve();
//
//    return 0;
//}
//
