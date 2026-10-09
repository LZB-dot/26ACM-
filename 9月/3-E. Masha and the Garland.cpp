//
////https://codeforces.com/contest/2244/problem/E
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
//    int n, q;
//    cin >> n >> q;
//
//    string s;
//    cin >> s;
//    s = " " + s;
//
//    vector<int>st0(n + 1, 0), st1(n + 1, 0);
//    vector<int>f0(n + 1, 0), f1(n + 1, 0);
//   
//    for (int i = 1; i <= n; ++i) {
//        char t0 = (i & 1) ? '0' : '1';
//        char t1 = (i & 1) ? '1' : '0';
//
//        st0[i] = (t0 != s[i]) ? 1 : 0;
//        st1[i] = (t1 != s[i]) ? 1 : 0;
//
//        f0[i] = f0[i - 1] + (st0[i] && !st0[i - 1] ? 1 : 0);
//        f1[i] = f1[i - 1] + (st1[i] && !st1[i - 1] ? 1 : 0);
//    }
//
//    //for (int i = 1; i <= n; ++i)
//    //    cout << f0[i] << "--\t"; 
//    //
//    //cout << endl;
//    //for (int i = 1; i <= n; ++i)
//    //    cout << f1[i] << "--\t";
//
//    while (q--) {
//        int l, r, k;
//        cin >> l >> r >> k;
//
//        //拆开的原因是：可能第一位包含了前面的削减次数1
//        int p0 = st0[l] + (f0[r] - f0[l]);
//        int p1 = st1[l] + (f1[r] - f1[l]);
//
//        if (min(p0, p1) <= k) 
//            cout << "YES\n";
//        else 
//            cout << "NO\n";
//        
//    }
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
//
//    return 0;
//}