//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<set>
//using namespace std;
//
//typedef long long ll;
//const int MAXN = 1e5 + 10;
//
//struct Node {
//    // p为锚点，最后缩小到的单点
//    int l, r, p;
//};
//
//vector<Node> build(int n, ll& M) {
//    vector<Node> ans;
//
//    // 优先取最长区间，凑够n个
//    for (int len = n; len >= 1 && ans.size() < n; --len) {
//        for (int i = 1; i + len - 1 <= n && ans.size() < n; ++i) {
//            int j = i + len - 1;
//            ans.push_back({ i, j, 0 });
//        }
//    }
//
//    // 基准集合总长度 M
//    M = 0;
//    for (auto& it : ans)
//        M += it.r - it.l + 1;
//
//    // id数组，分配p用：按右端点从小到大；右端相同则左端点从小到大
//    vector<int> id(n);
//    for (int i = 0; i < n; ++i)
//        id[i] = i;
//
//    sort(id.begin(), id.end(), [&](int x, int y) {
//        if (ans[x].r != ans[y].r)
//            return ans[x].r < ans[y].r;
//        return ans[x].l < ans[y].l;
//        });
//
//    set<int> unused;
//    for (int i = 1; i <= n; ++i)
//        unused.insert(i);
//
//    // 分配锚点p：找 >= l 的最小空闲位置
//    for (int i : id) {
//        auto it = unused.lower_bound(ans[i].l);
//        ans[i].p = *it;
//        unused.erase(it);
//    }
//
//    // 缩短顺序：原始长度从小到大；长度相同按左、右端升序
//    sort(ans.begin(), ans.end(), [](const Node& x, const Node& y) {
//        int len1 = x.r - x.l + 1;
//        int len2 = y.r - y.l + 1;
//        if (len1 != len2)
//            return len1 < len2;
//        if (x.l != y.l)
//            return x.l < y.l;
//        return x.r < y.r;
//        });
//
//    return ans;
//}
//
//// 仿真函数：目标总长度x，返回对应的S
//ll cal(const vector<Node>& base, const vector<ll>& pre, ll M, ll x) {
//    ll D = M - x;
//    ll res = 0;
//
//    for (auto it : base) {
//        int l = it.l;
//        int r = it.r;
//        int p = it.p;
//
//        ll mx = r - l;
//        ll cur = min(mx, D);
//        int left_ = p - l;
//
//        if (cur <= left_)
//            l += cur;
//        else {
//            r -= cur - left_;
//            l = p;
//        }
//
//        D -= cur;
//        res += pre[r] - pre[l - 1];
//    }
//    return res;
//}
//
//void solve(){
//
//    string role;
//    cin >> role;
//
//    int T;
//    cin >> T;
//
//    while (T--){
//        int n;
//        ll val;
//
//        if (role == "cat")
//            cin >> n >> val;
//        else
//            cin >> n >> val;
//
//        vector<int> a(n + 1, 0);
//        vector<ll> pre(n + 1, 0);
//        for (int i = 1; i <= n; ++i){
//            cin >> a[i];
//            pre[i] = pre[i - 1] + a[i];
//        }
//
//        ll M;
//        vector<Node> base = build(n, M);
//
//        if (role == "cat") {
//            ll m = val;
//            ll D = M - m;//需要切除的区间长度
//
//            vector<Node> cur = base;
//            for (auto& seg : cur){
//                //最大减少长度
//                ll mx = seg.r - seg.l;
//                ll take = min(mx, D);
//
//                //左侧最大减少长度
//                int left_ = seg.p - seg.l;
//               
//                if (take <= left_) //左侧够切除
//                    seg.l += take;
//                else{               //右侧切除
//                    seg.r -= take - left_;
//                    seg.l = seg.p;
//                }
//
//                D -= take;
//            }
//
//            for (auto& seg : cur)
//                cout << seg.l << " " << seg.r << '\n';
//            cout.flush();
//        }
//        else{
//            ll S = val;
//            ll L = n, R = M;
//            ll ans = -1;
//
//            while (L <= R){
//                ll mid = L + (R - L) / 2;
//                ll fmid = cal(base, pre, M, mid);
//
//                if (fmid == S){
//                    ans = mid;
//                    break;
//                }
//                else if (fmid < S)
//                    L = mid + 1;
//                else
//                    R = mid - 1;
//            }
//            cout << ans << '\n';
//            cout.flush();
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    solve();
//
//    return 0;
//}
