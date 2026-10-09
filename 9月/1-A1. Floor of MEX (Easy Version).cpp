//
////https://codeforces.com/contest/2262/problem/A1
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef long long ll;
//
//void solve() {
//    int n;
//    cin >> n;
//
//    vector<int> a(n + 1);
//    for (int i = 1; i <= n; ++i) 
//        cin >> a[i];
//
//
//    vector<int> diff(n + 1, 0);
//
//    for (int k = 1; k <= n; ++k) {
//        ll L = (ll)a[k] * k;
//        if (L < n) {
//            ll R = min((ll)n - 1, (ll)a[k] * k + k - 1);
//            diff[L]++;
//            diff[R + 1]--;
//        }
//    }
//
//
//    vector<int> B;
//    int cur = 0;
//    for (int x = 0; x < n; ++x) {
//        cur += diff[x];
//        if (cur == 0) 
//            B.push_back(x);
//        
//    }
//
//    cout << B.size() << "\n";
//    for (int i = 0; i < B.size(); ++i) 
//        cout << B[i] <<  " ";
//    
//    cout << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int T;
//    cin >> T;
//    while (T--) 
//        solve();
//
//    return 0;
//}
//
//
//
//
//
//
