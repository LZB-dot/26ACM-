//////
//////
//////
////////https://codeforces.com/gym/103577/problem/F
//////
//////
//////
//////#include<iostream>
//////#include<vector>
//////#include<algorithm>
//////#include<string>
//////#include<bitset>
//////
//////using namespace std;
//////
//////const int MAXN = 5010;
//////
//////void solve() {
//////    int n, q;
//////    cin >> n >> q;
//////
//////    bitset<MAXN> g[MAXN];
//////    //每一行和每一列0的数量
//////    vector<int> row(n, 0), col(n, 0);
//////    //全1行的数量和全1列的数量
//////    int fullR = 0, fullC = 0;
//////
//////    for (int i = 0; i < n; ++i) {
//////        string s;
//////        cin >> s;
//////
//////        for (int j = 0; j < n; ++j) {
//////            int v = s[j] - '0';
//////
//////            g[i].set(j, v);
//////
//////            row[i] += v;
//////            col[j] += v;
//////        }
//////    }
//////
//////
//////    for (int i = 0; i < n; ++i) {
//////        if (row[i] == n) 
//////            ++fullR;
//////
//////        if (col[i] == n)
//////            ++fullC;
//////    }
//////
//////
//////    auto check = [&](int b) {
//////
//////        //记录每一行末尾的数
//////        int lastR[MAXN];
//////        for (int i = 0; i < n; ++i) 
//////            lastR[i] = g[i][n - 1] ? 1 : 0;
//////        
//////
//////        for (int i = 0; i < n; ++i) {
//////            //先-
//////            if (row[i] == n) 
//////                --fullR;
//////
//////            //左移在位图里面是向高位移
//////            //0->1  1->2
//////            g[i] <<= 1; //当前行整体右移
//////
//////            //调整行首部元素
//////            int cur = (i == 0) ? b : lastR[i - 1];
//////            g[i].set(0, cur);
//////
//////            //增量更新当前行1的个数
//////            row[i] += cur - lastR[i]; 
//////
//////            if (row[i] == n) 
//////                ++fullR;
//////        }
//////
//////        //更新各列
//////        //记录老的每一列1数量
//////        int col_[MAXN];
//////        for (int j = 0; j < n; ++j) {
//////            if (col[j] == n) 
//////                --fullC;
//////
//////            col_[j] = col[j];
//////        }
//////
//////        //2 ~ n 列直接继承前一列
//////        for (int j = 1; j < n; ++j)
//////            col[j] = col_[j - 1];
//////
//////        // 第 0 列的更新：旧的最后列总和 + 新插入的 b - 原来最后一行末尾元素
//////        col[0] = col_[n - 1] + b - lastR[n - 1];
//////
//////        for (int j = 0; j < n; ++j) 
//////            if (col[j] == n)
//////                ++fullC;
//////        
//////
//////        return;
//////      };
//////
//////    while (q--) {
//////        int op;
//////        cin >> op;
//////
//////        if (op == 1) {
//////            int i, j, b;
//////            cin >> i >> j >> b;
//////
//////            --i; 
//////            --j;
//////
//////            int old = g[i][j] ? 1 : 0;
//////            if (old == b) {
//////                cout << fullR + fullC << "\n";
//////                continue;
//////            }
//////
//////            if (row[i] == n) 
//////                fullR--;
//////            if (col[j] == n) 
//////                fullC--;
//////
//////            row[i] += b - old;
//////            col[j] += b - old;
//////            g[i].set(j, b);
//////
//////            if (row[i] == n)
//////                fullR++;
//////            if (col[j] == n)
//////                fullC++;
//////        }
//////        else {
//////            int b;
//////            cin >> b;
//////            check(b);
//////        }
//////
//////        cout << fullR + fullC << "\n";
//////    }
//////}
//////
//////int main() {
//////
//////    ios::sync_with_stdio(false);
//////    cin.tie(nullptr);
//////
//////    solve();
//////
//////    return 0;
//////}
////
////
////
////
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include<string>
////#include<bitset>
////
////using namespace std;
////
////const int MAXN = 5010;
////const int MAXM = MAXN * MAXN;
////
////bitset<MAXM>g; 
////int n, q;
////
////int get(int i, int j) {
////    return i * n + j;
////}
////
////void solve() {
////    cin >> n >> q;
////
////    //每一行和每一列0的数量
////    vector<int> row(n, 0), col(n, 0);
////    //全1行的数量和全1列的数量
////    int fullR = 0, fullC = 0;
////
////    for (int i = 0; i < n; ++i) {
////        string s;
////        cin >> s;
////
////        for (int j = 0; j < n; ++j) {
////            int v = s[j] - '0';
////
////            g.set(get(i,j), v);
////
////            row[i] += v;
////            col[j] += v;
////        }
////    }
////
////
////    for (int i = 0; i < n; ++i) {
////        if (row[i] == n)
////            ++fullR;
////
////        if (col[i] == n)
////            ++fullC;
////    }
////
////
////    auto check = [&](int b) {
////
////        //记录每一行末尾的数
////        int lastR[MAXN];
////        for (int i = 0; i < n; ++i)
////            lastR[i] = g[get(i, n - 1)] ? 1 : 0;
////
////
////        g <<= 1;
////        g.set(0, b);
////
////        for (int i = 0; i < n; ++i) {
////            //先-
////            if (row[i] == n)
////                --fullR;
////
////            //调整行首部元素
////            int cur = (i == 0) ? b : lastR[i - 1];
////
////            //增量更新当前行1的个数
////            row[i] += cur - lastR[i];
////
////            if (row[i] == n)
////                ++fullR;
////        }
////
////        //更新各列
////        //记录老的每一列1数量
////        int col_[MAXN];
////        for (int j = 0; j < n; ++j) {
////            if (col[j] == n)
////                --fullC;
////
////            col_[j] = col[j];
////        }
////
////        //2 ~ n 列直接继承前一列
////        for (int j = 1; j < n; ++j)
////            col[j] = col_[j - 1];
////
////        // 第 0 列的更新：旧的最后列总和 + 新插入的 b - 原来最后一行末尾元素
////        col[0] = col_[n - 1] + b - lastR[n - 1];
////
////        for (int j = 0; j < n; ++j)
////            if (col[j] == n)
////                ++fullC;
////
////
////        return;
////        };
////
////    while (q--) {
////        int op;
////        cin >> op;
////
////        if (op == 1) {
////            int i, j, b;
////            cin >> i >> j >> b;
////
////            --i;
////            --j;
////
////            int old = g[get(i,j)] ? 1 : 0;
////            if (old == b) {
////                cout << fullR + fullC << "\n";
////                continue;
////            }
////
////            if (row[i] == n)
////                fullR--;
////            if (col[j] == n)
////                fullC--;
////
////            row[i] += b - old;
////            col[j] += b - old;
////            g.set(get(i,j), b);
////
////            if (row[i] == n)
////                fullR++;
////            if (col[j] == n)
////                fullC++;
////        }
////        else {
////            int b;
////            cin >> b;
////            check(b);
////        }
////
////        cout << fullR + fullC << "\n";
////    }
////}
////
////int main() {
////
////    ios::sync_with_stdio(false);
////    cin.tie(nullptr);
////
////    solve();
////
////    return 0;
////}
//
//
//
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//const int MAXN = 5010;
//
//void solve() {
//    int n, q;
//    cin >> n >> q;
//
//    vector<int>g(n * n + q + 1, 0);
//    vector<int>row(n, 0), col(n, 0);
//
//    int st = q;
//
//    for (int i = 0; i < n; ++i) {
//        string s;
//        cin >> s;
//
//        for (int j = 0; j < n; ++j) {
//            int v = s[j] - '0';
//
//            int pos = st + i * n + j;
//            g[pos] = v;
//
//            row[i] += v;
//            col[pos % n] += v;
//        }
//    }
//
//
//    while (q--) {
//        int op;
//        cin >> op;
//
//        if (op == 1) {
//            int i, j, b;
//            cin >> i >> j >> b;
//
//            --i;
//            --j;
//
//            int pos = st + i * n + j;
//            int old = g[pos];
//
//            if (old == b) {
//                int ans = 0;
//
//                for (int x : row)
//                    ans += (x == n);
//                for (int x : col)
//                    ans += (x == n);
//
//                cout << ans << "\n";
//
//                continue;
//            }
//
//            row[i] += b - old;
//            col[pos % n] += b - old;
//            g[pos] = b;
//        }
//        else {
//            int b;
//            cin >> b;
//
//            for (int i = 0; i < n; ++i) {
//                int lastR = st + i * n + n - 1;
//                int out = g[lastR];
//
//                row[i] -= out;
//            }
//
//            for (int i = 0; i < n - 1; ++i) {
//                int lastR = st + i * n + n - 1;
//                int out = g[lastR];
//
//                row[i + 1] += out;
//            }
//
//            st--;
//            row[0] += b;
//
//            int old = st + n * n;
//            col[old % n] -= g[old];
//
//            g[st] = b;
//            col[st % n] += b;
//        }
//
//        int ans = 0;
//        for (int x : row) 
//            if (x == n) 
//                ++ans;
//        
//        for (int x : col) 
//            if (x == n)
//                ++ans;
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
//
//}