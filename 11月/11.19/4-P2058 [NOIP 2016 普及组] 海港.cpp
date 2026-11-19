//
//
////https://www.luogu.com.cn/problem/P2058
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//#include<unordered_map>
//
//using namespace std;
//
//void solve() {
//    int n;
//    cin >> n;
//
//    vector<int>t(n + 1), k(n + 1);
//    vector<vector<int>>nation(n + 1);
//
//    for (int i = 1; i <= n; ++i) {
//        cin >> t[i] >> k[i];
//
//        nation[i].resize(k[i] + 1, 0);
//        for (int j = 1; j <= k[i]; ++j)
//            cin >> nation[i][j];
//    }
//
//    unordered_map<int, int>mp;
//
//    int l = 1;
//    for (int r = 1; r <= n; ++r) {
//        while (t[r] - t[l] >= 86400) {
//            for (int i = 1; i <= k[l]; ++i) {
//                mp[nation[l][i]]--;
//                if (mp[nation[l][i]] == 0)
//                    mp.erase(nation[l][i]);
//            }
//
//            ++l;
//        }
//
//        for (int i = 1; i <= k[r]; ++i)
//            mp[nation[r][i]]++;
//
//        cout << mp.size() << "\n";
//    }
//
//
//    
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
