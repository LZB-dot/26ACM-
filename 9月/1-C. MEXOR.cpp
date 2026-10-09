//
////https://codeforces.com/contest/2245/problem/C
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
//    ll n, k;
//    cin >> n >> k;
//
//    //判断是否是2的幂
//    bool f = (n & (n - 1)) == 0;
//    if (f) {
//        if (k < n || k >= 2 * n) {
//            cout << "NO\n";
//            return;
//        }
//    }
//    else {
//        //大于 n 的最小 2 次幂
//        ll mx = 1;
//        while (mx <= n) 
//            mx <<= 1;
//
//        if (k >= mx) {
//            cout << "NO\n";
//            return;
//        }
//    }
//
//    cout << "YES\n";
//
//    //k == n，直接输出全倒序
//    if (k == n) {
//        for (int i = n - 1; i >= 0; --i) 
//            cout << i <<  " ";
//        
//        cout << "\n";
//        return;
//    }
//
//    //计算基准异或和 T = 1 ^ 2 ^ ... ^ (n-1)
//    ll mex = 0;
//    for (int i = 1; i < n; ++i) 
//        mex ^= i;
//    
//    ll tmp = k ^ n ^ mex;
//
//    if (tmp == 0) {
//        for (int i = 0; i < n; ++i) 
//            cout << i <<  " ";  
//    }
//    else if (tmp >= 1 && tmp < n) {
//        // 抹去 1 个数：把 tmp 放到开头
//        cout << tmp << " ";
//        for (int i = 0; i < n; ++i) {
//            if (i != tmp)
//                cout << i << " ";
//        }
//    }
//    else {
//        // 抹去 2 个数：拆成 i 和 j
//        int p = 0;
//        while ((1 << (p + 1)) <= tmp) {
//            ++p;
//        }
//
//        int i = (1 << p);       //最高 2 的幂次数值
//        int j = tmp ^ i;        //剩余数值
//
//        cout << i << " " << j << " ";
//        for (int a = 0; a < n; ++a) {
//            if (a != i && a != j) 
//                cout << a << " ";
//        }
//    }
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
//
//    return 0;
//}