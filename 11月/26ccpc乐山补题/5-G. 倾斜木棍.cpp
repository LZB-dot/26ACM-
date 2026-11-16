//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<numeric>
//#include<climits>
//using namespace std;
//
//typedef long long ll;
//const int MAXN = 1e5 + 10;
//const int MOD = 998244353;
//
//
//
//struct Matrix{
//    ll m[2][2];
//
//    Matrix() {
//        m[0][0] = m[0][1] = 0;
//        m[1][0] = m[1][1] = 0;
//    }
//
//    //µ•Œªæÿ’Û
//    static Matrix I() {
//        Matrix res;
//        res.m[0][0] = 1;
//        res.m[1][1] = 1;
//        res.m[0][1] = 0;
//        res.m[1][0] = 0;
//        return res;
//    }
//};
//
//Matrix tree[MAXN << 2];
//vector<ll>x, a;
//int n, q;
//
//Matrix cal(Matrix a, Matrix b) {
//    Matrix ans;
//
//    for (int i = 0; i < 2; ++i) {
//        for (int k = 0; k < 2; ++k) {
//            if (a.m[i][k] == 0)
//                continue;
//            for (int j = 0; j < 2; ++j)
//                ans.m[i][j] = (ans.m[i][j] + a.m[i][k] * b.m[k][j]) % MOD;
//        }
//    }
//
//    return ans;
//}
//
//Matrix getX(int i) {
//    Matrix ans;
//
//    ans.m[0][0] = x[i - 1] <= x[i] - a[i];
//    ans.m[0][1] = x[i - 1] + a[i - 1] <= x[i] - a[i];
//    ans.m[1][1] = x[i - 1] + a[i - 1] <= x[i];
//    ans.m[1][0] = 1;
//
//    return ans;
//}
//
//void up(int i) {
//    tree[i] = cal(tree[i << 1 | 1], tree[i << 1]);
//}
//
//void update(int p, Matrix jobv, int l, int r, int i) {
//    if (l == r) {
//        tree[i] = jobv;
//        return;
//    }
//
//    int mid = l + (r - l >> 1);
//    if (p <= mid)
//        update(p, jobv, l, mid, i << 1);
//    else
//        update(p, jobv, mid + 1, r, i << 1 | 1);
//
//    up(i);
//
//}
//
//ll getAns() {
//    if (n == 1)
//        return 2;
//
//    Matrix total = tree[1];
//
//    ll p0 = (total.m[0][0] + total.m[0][1]) % MOD;
//    ll p1= (total.m[1][0] + total.m[1][1]) % MOD;
//   
//    return (p0 + p1) % MOD;
//}
//
//void solve() {
//    cin >> n >> q;
//
//    x.resize(n + 1, 0);
//    for (int i = 1; i <= n; ++i)
//        cin >> x[i];
//
//    a.resize(n + 1, 0);
//    for (int i = 1; i <= n; ++i)
//        cin >> a[i];
//
//    if (n >= 2) {
//        for (int i = 2; i <= n; ++i) {
//            Matrix tmp = getX(i);
//            update(i, tmp, 2, n, 1);
//        }
//    }
//
//    cout << getAns() << "\n";
//    
//    while (q--) {
//        int p;
//        ll v;
//        cin >> p >> v;
//
//        a[p] = v;
//
//        if (p >= 2) {
//            Matrix tmp = getX(p);
//            update(p, tmp, 2, n, 1);
//        }
//
//        if (p + 1 <= n) {
//            Matrix tmp = getX(p + 1);
//            update(p + 1, tmp, 2, n, 1);
//        }
//
//        cout << getAns() << "\n";
//    }
//
//}
//
//int main() {
//
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    //int T;
//    //cin >> T;
//
//    //while (T--)
//        solve();
//
//    return 0;
//}
