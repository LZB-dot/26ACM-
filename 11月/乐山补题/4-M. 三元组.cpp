//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<numeric>
//#include<climits>
//using namespace std;
//
//typedef long long ll;
//const int MAXN = 1e6 + 10;
//
//
//vector<int> find(const vector<int>& cand, const vector<vector<int>>& abc) {
//    int k = cand.size();
//    vector<int> tmp[3];
//
//    for (int d = 0; d < 3; ++d) {
//        tmp[d].reserve(k); //预分配空间
//        for (int i : cand)
//            tmp[d].push_back(abc[i][d]);
//
//        sort(tmp[d].begin(), tmp[d].end());
//    }
//
//    vector<int> idxs;
//    // 取1/8,2/8,...,7/8分位数下标，目标尽量均匀切成8份
//    for (int i = 1; i <= 7; ++i)
//        idxs.push_back(i * k / 8);
//    idxs.push_back((k - 1) / 2); //额外加入中位数兜底
//
//    sort(idxs.begin(), idxs.end());
//    idxs.erase(unique(idxs.begin(), idxs.end()), idxs.end());
//
//    vector<int> thr[3];
//    for (int d = 0; d < 3; ++d)
//        for (int ix : idxs)
//            thr[d].push_back(tmp[d][ix]);
//
//
//    vector<int> best = { 1, 1, 1 };
//    int bestmx = INT_MAX;         //最优方案对应的最坏分支大小
//
//    // 三重循环枚举所有阈值组合(ta,tb,tc)
//    for (int a : thr[0]) {
//        for (int b : thr[1]) {
//            for (int c : thr[2]) {
//                int cnt[8] = { 0 }; //8个分支各自的候选数量
//
//                for (int i : cand) {
//                    bool ba = abc[i][0] < a;
//                    bool bb = abc[i][1] < b;
//                    bool bc = abc[i][2] < c;
//                    // 三个bool拼成3bit，0~7，对应8个分支
//                    int t = (ba << 2) | (bb << 1) | bc;
//                    cnt[t]++;
//                }
//
//                //这个阈值组合下，8个分支里人数最多的那一支
//                int mx = 0;
//                for (int t = 0; t < 8; ++t)
//                    mx = max(mx, cnt[t]);
//
//                //找最坏分支最小的一组阈值
//                if (mx < bestmx) {
//                    bestmx = mx;
//                    best = { a, b, c };
//                    //如果最坏分支已经 ≤ k/4，效果足够好，直接返回不用继续枚举
//                    if (bestmx * 4 <= k)
//                        return best;
//
//                }
//            }
//        }
//    }
//    return best;
//}
//
//void solve() {
//    int n;
//    cin >> n;
//    vector<vector<int>> abc(n + 1, vector<int>(3, 0));
//
//    for (int i = 1; i <= n; ++i)
//        for (int j = 0; j < 3; ++j)
//            cin >> abc[i][j];
//
//
//
//    vector<int> cand(n);
//    //cand初始化为 [1,2,3,...,n]，全部是候选
//    iota(cand.begin(), cand.end(), 1);
//
//    for (int it = 1; it <= 10 && cand.size() > 1; ++it) {
//        vector<int> t = find(cand, abc);
//        int m1 = t[0], m2 = t[1], m3 = t[2];
//
//        cout << "? " << m1 << " " << m2 << " " << m3 << "\n";
//        cout.flush();
//
//        string s;
//        cin >> s;
//
//        vector<int> nxt;
//        for (int i : cand) {
//
//            bool f1 = (s[0] == '0' && abc[i][0] >= m1) || (s[0] == '1' && abc[i][0] < m1);
//            bool f2 = (s[1] == '0' && abc[i][1] >= m2) || (s[1] == '1' && abc[i][1] < m2);
//            bool f3 = (s[2] == '0' && abc[i][2] >= m3) || (s[2] == '1' && abc[i][2] < m3);
//
//            if (f1 && f2 && f3)
//                nxt.push_back(i);
//        }
//        cand = move(nxt);
//    }
//
//    int p = cand[0];
//    cout << "! " << abc[p][0] << " " << abc[p][1] << " " << abc[p][2] << "\n";
//    cout.flush();
//}
//
//int main() {
//
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
