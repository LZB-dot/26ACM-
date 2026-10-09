//
//
////https://codeforces.com/contest/925/problem/B
//
//
//
//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//typedef long long ll;
//
//struct Node {
//    int id;
//    ll x;
//};
//
//void solve() {
//    ll n, x1, x2;
//    cin >> n >> x1 >> x2;
//
//    vector<Node>a(n + 1);
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i].x;
//        a[i].id = i;
//    }
//
//    sort(a.begin() + 1, a.end(), [&](const Node& p1, const Node& p2) {
//        return p1.x > p2.x;
//        });
//
//    for (int i = 1; i <= n; ++i) {
//        if (a[i].x * i >= x1) {
//            for (int j = i + 1; j <= n; ++j) {
//                if (a[j].x * (j - i) >= x2) {
//                    cout << "Yes\n";
//                    cout << i << " " << j - i << "\n";
//
//                    for (int k = 1; k <= i; ++k)
//                        cout << a[k].id << " ";
//                    cout << "\n";
//
//                    for (int k = i + 1; k <= j; ++k)
//                        cout << a[k].id << " ";
//                    cout << "\n";
//                    return;
//                }
//            }
//            break; 
//        }
//    }
//
//    for (int i = 1; i <= n; ++i) {
//        if (a[i].x * i >= x2) {
//            for (int j = i + 1; j <= n; ++j) {
//                if (a[j].x * (j - i) >= x1) {
//                    cout << "Yes\n";
//                    cout << j - i << " " << i << "\n";
//
//                    for (int k = i + 1; k <= j; ++k)
//                        cout << a[k].id << " ";
//                    cout << "\n";
//
//                    for (int k = 1; k <= i; ++k)
//                        cout << a[k].id << " ";
//                    cout << "\n";
//                    return;
//                }
//            }
//            break;
//        }
//    }
//
//    cout << "No\n";
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