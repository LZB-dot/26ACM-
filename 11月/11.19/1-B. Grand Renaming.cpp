//
////https://codeforces.com/gym/106368/problem/B
//
//// 我只考虑了不同站台的移动 内部移动也有花费
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//typedef long long ll;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int n;
//    cin >> n;
//
//    vector<string>s(n + 1), t(n + 1);
//    for (int i = 1; i <= n; ++i)
//        cin >> s[i];
//    for (int i = 1; i <= n; ++i)
//        cin >> t[i];
//
//    ll ans = 0;
//    vector<int>need(30, 0);
//
//    for (int i = 1; i <= n; ++i) {
//        for (char c : s[i])
//            need[c - 'a']--;
//        for (char c : t[i])
//            need[c - 'a']++;
//
//        for (int j = 0; j < 30; ++j)
//            ans += abs(need[j]);
//    }
//
//    bool f = 1;
//    for (int i = 0; i < 30; ++i)
//        if (need[i] != 0)
//            f = 0;
//
//    if (!f) {
//        cout << "-1\n";
//        return 0;
//    }
//
//    for (int k = 1; k <= n; ++k) {
//        int len1 = s[k].size();
//        int len2 = t[k].size();
//
//        vector<vector<int>>dp(len1 + 1, vector<int>(len2 + 1, 0));
//
//        for (int i = 0; i < len1; ++i) {
//            for (int j = 0; j < len2; ++j) {
//                if (s[k][i] == t[k][j]) 
//                    dp[i + 1][j + 1] = dp[i][j] + 1;
//                else 
//                    dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
//                
//            }
//        }
//
//        ans += len1 - dp[len1][len2];
//    }
//
//    cout << ans << "\n";
//
//    return 0;
//}
