//
//
////https://codeforces.com/contest/925/problem/B
//
//
//
//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//typedef long long ll;
//
//void solve() {
//    int n;
//    cin >> n;
//
//    vector<pair<int,int> > a(n + 1);
//    for (int i = 1; i <= 2 * n; ++i) {
//        int x;
//        cin >> x;
//
//        if (a[x].first == 0)
//            a[x].first = i;
//        else
//            a[x].second = i;
//    }
//
//    auto check = [&](int len) -> int {
//        int l = max(1, len - 2 * n);
//
//        auto exclude = [&](int p) {
//            if (2 * p < len) 
//                l = max(l, p + 1);
//            
//            else if (2 * p > len) 
//                l = max(l, len - p + 1);
//            };
//
//        for (int x = 0; x < n; ++x) {
//            int p1 = a[x].first;
//            int p2 = a[x].second;
//
//            if (p1 + p2 == len)
//                continue;
//
//            if (2 * p1 == len)
//                exclude(p2);
//            else if (2 * p2 == len)
//                exclude(p1);
//            else {
//                exclude(p1);
//                exclude(p2);
//            }
//        }
//
//        int r = len - l;
//
//        if (l > r)
//            return 0;
//
//        int i = 0;
//        while (i < n) {
//            int p1 = a[i].first;
//            int p2 = a[i].second;
//
//            if (p1 + p2 == len) {
//                if (p1 >= l && p1 <= r && p2 >= l && p2 <= r)
//                    ++i;
//                else
//                    break;
//            }
//            else if (2 * p1 == len) {
//                if (p1 >= l && p1 <= r)
//                    ++i;
//                else
//                    break;
//            }
//            else if (2 * p2 == len) {
//                if (p2 >= l && p2 <= r)
//                    ++i;
//                else
//                    break;
//            }
//            else
//                break;
//        }
//
//        return i;
//        };
//
//    int ans = 1;
//    ans = max(ans, check(a[0].first + a[0].second));
//    ans = max(ans, check(2 * a[0].first));
//    ans = max(ans, check(2 * a[0].second));
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