//
////https://codeforces.com/gym/104146/problem/K
//
//
//
//#include<iostream>
//#include<vector>
//#include<map>
//#include<random>
//#include<set>
//#include<chrono>
//
//using namespace std;
//
//typedef unsigned long long ull;
//typedef long long ll;
//
//void solve() {
//    int n;
//    cin >> n;
//
//    vector<int>a(n + 1, 0);
//    bool f = 0;
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//        if (a[i] != i)
//            f = 1;
//    }
//
//    if (!f) {
//        cout << "empty\n";
//        return;
//    }
//
//    string ans;
//
//    for (int i = 1; i < n; ++i) {
//        for (int j = 1; j < n; ++j) {
//            if (a[1] > a[2]) {
//                swap(a[1], a[2]);
//                ans += "S";
//            }
//
//            int cur = a[1];
//            for (int j = 1; j < n; ++j)
//                a[j] = a[j + 1];
//            a[n] = cur;
//            ans += "P";
//        }
//
//        int cur = a[1];
//        for (int j = 1; j < n; ++j)
//            a[j] = a[j + 1];
//        a[n] = cur;
//        ans += "P";
//    }
//
//    cout << ans << "\n";
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
