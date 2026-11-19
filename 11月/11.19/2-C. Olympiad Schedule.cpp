//
//
////https://codeforces.com/gym/106368/problem/C
//
////知道思路之后 可以跳出来总结一下 写代码更清晰
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//
//#define pii pair<ll,int>
//typedef long long ll;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int n;
//    cin >> n;
//
//    ll D, t;
//    cin >> D >> t;
//
//    vector<pair<ll, ll>>db(n + 1);
//
//    for (int i = 1; i <= n; ++i)
//        cin >> db[i].first >> db[i].second;
//
//    ll res = 0;
//    vector<int>ans(n + 1, 1);
//
//    priority_queue<pii, vector<pii>, greater<pii>>pq;
//
//    for (int i = n; i >= 1;) {
//
//        int j = i;
//
//        while (j >= 1 && db[i].first == db[j].first)
//            --j;
//
//        for (int k = j + 1; k <= i; ++k)
//            pq.push({ db[k].second, k });
//
//        ll mx = D - db[i].first + 1;
//
//        while ((ll)pq.size() > mx) {
//            int x = pq.top().second;
//            ans[x] = 0;
//            pq.pop();
//        }
//
//        i = j;
//    }
//
//    while (!pq.empty()) {
//        res += pq.top().first;
//        pq.pop();
//    }
//
//    cout << res << "\n";
//
//    if (t == 2) {
//        ll cur = D;
//        ll last = D;
//
//        for (int i = n; i >= 1; --i) {
//            if (ans[i]) {
//                ans[i] = cur;
//                last = cur;
//                --cur;
//            }
//            else {
//                ans[i] = last;
//            }
//        }
//
//        for (int i = 1; i <= n; ++i)
//            cout << ans[i] << " ";
//
//        cout << "\n";
//    }
//
//    return 0;
//}
