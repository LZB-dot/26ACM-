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
//const ll INF = 1e18;
//
//void solve() {
//    int n;
//    cin >> n;
//
//    vector<int>a(n + 1, 0);
//    for (int i = 1; i <= n; ++i)
//        cin >> a[i];
//
//    vector<int>tmp;
//    tmp.push_back(a[1]);
//    tmp.push_back(a[n]);
//
//    sort(tmp.begin(), tmp.end());
//
//    int mex = 0;
//    if (tmp[0] == 0 && tmp[1] == 1)
//        cout << "2\n";
//    else if (tmp[0] == 0)
//        cout << "1\n";
//    else
//        cout << "0\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    //ll T;
//    //cin >> T;
//
//    //while (T--)
//    solve();
//
//    return 0;
//}