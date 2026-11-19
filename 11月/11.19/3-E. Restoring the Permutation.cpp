//
//
////https://codeforces.com/problemset/problem/1506/E
//
////修改了一个入队的 可以从前一个开始遍历
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//
//void solve() {
//    int n;
//    cin >> n;
//
//    vector<int>a(n + 1, 0);
//    vector<int>b1(n + 1, 0);
//    vector<bool>v1(n + 1, false);
//
//    vector<int>b2(n + 1, 0);
//    vector<bool>v2(n + 1, false);
//    
//    int k1 = 1;
//    
//    priority_queue<int>pq;
//
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//
//        if (a[i] != a[i - 1]) {
//            b1[i] = a[i];
//            b2[i] = a[i];
//            v1[a[i]] = 1;
//            v2[a[i]] = 1;
//
//            for (int j = a[i-1]+1; j < a[i]; ++j)
//                    pq.push(j);
//        }
//        else {
//            while (v1[k1])
//                ++k1;
//
//            b1[i] = k1;
//            v1[k1] = 1;
//
//            b2[i] = pq.top();
//            pq.pop();
//            v2[b2[i]] = 1;
//        }
//        
//    }
//
//    for (int i = 1; i <= n; ++i)
//        cout << b1[i] << " ";
//    cout << "\n";   
//    for (int i = 1; i <= n; ++i)
//        cout << b2[i] << " ";
//    cout << "\n";
//}
//
//int main() {
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
