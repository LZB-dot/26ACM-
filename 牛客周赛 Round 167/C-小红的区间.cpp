//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<map>
//#include<climits>
//#include<bitset>
//
//using namespace std;
//
//typedef unsigned long long ll;
//
//
//
//void solve() {
//
//    ll x;
//    cin >> x;
//
//    if (x % 3 != 0) {
//        cout << x << " " << x + 2 << "\n";
//        return;
//    }
//
//    if (x % 5 != 0) {
//        cout << x - 1 << " " << x + 3 << "\n";
//        return;
//    }
//
//    ll k = 0;
//    for (ll i = 7; i <= 1e18; ++i) {
//        bool f = 1;
//        k = i;
//
//        if (i % x == 0 || x % i == 0)
//            continue;
//
//        for (ll j = 2; j * j <= i; ++j) {
//            if (i % j == 0) {
//                f = 0;
//                break;
//            }
//        }
//
//        if (f)
//            break;
//    }
//
//    ll t = (k - 1) / 2;
//    cout << x + 1 - t << " " << x + 1 + t << "\n";
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
