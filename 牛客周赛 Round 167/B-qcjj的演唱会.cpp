//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<map>
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
//    map<string, int>mp1;
//
//    for (int i = 1; i <= n; ++i) {
//        string s;
//        cin >> s;
//        mp1[s]++;
//    }
//
//    for (int i = 1; i <= n; ++i) {
//        string s;
//        cin >> s;
//        mp1[s]++;
//    }
//    for (int i = 1; i <= n; ++i) {
//        string s;
//        cin >> s;
//        mp1[s]++;
//    }
//
//    vector<string>ans;
//    for (auto it : mp1) {
//        if (it.second == 3)
//            ans.push_back(it.first);
//    }
//
//    cout << ans.size() << "\n";
//    for (auto it : ans)
//        cout << it << " ";
//    cout << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    solve();
//
//    return 0;
//}