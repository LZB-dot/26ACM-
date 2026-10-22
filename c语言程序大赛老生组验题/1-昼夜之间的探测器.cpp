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
//void solve() {
//    ll a, b, h;
//    cin >> a >> b >> h;
//
//    if (h == 0) {
//        cout << "0\n";
//        return;
//    }
//
//    if (b >= a) {
//        if (a >= h) {
//            cout << "1\n";
//            return;
//        }
//
//        cout << "-1\n";
//    }
//    else {
//        ll x = h - a;
//
//        ll ans = x / (a - b);
//        if (x % (a - b))
//            ++ans;
//
//        ans++;
//
//        cout << ans << "\n";
//    }
//
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