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
//    int n;
//    cin >> n;
//
//    vector<int>p(n + 1, 0), q(n + 1, 0);
//    for (int i = 1; i <= n; ++i)
//        cin >> p[i];
//
//    for (int i = 1; i <= n; ++i)
//        cin >> q[i];
//
//    ll ans = 0;
//    vector<bool>vis(n + 1, 0);
//
//    for (int i = 1; i <= n; ++i) {
//        if (vis[i])
//            continue;
//
//        vector<int>cur;
//        int j = i;
//        while (!vis[j]) {
//            vis[j] = 1;
//            cur.push_back(j);
//            j = p[j];
//        }
//
//        if (p[cur.back()] != cur[0])
//            continue;
//
//        int k = cur.size();
//        if (k == 1)
//            continue;
//
//        vector<int>pos = cur;
//        sort(pos.begin(), pos.end());
//
//        vector<pair<int, int>>a;
//        for (int j : cur)
//            a.emplace_back(q[j], j);
//
//        sort(a.begin(), a.end(), greater<pair<int, int>>());
//
//        ll sum = 0;
//        for (int j = 0; j < k; ++j)
//            sum += abs(a[j].second - pos[j]);
//        
//
//        ans += sum / 2;
//    }
//
//    cout << ans << "\n";
//}
//
//int main() {
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