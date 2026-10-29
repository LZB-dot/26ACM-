//
////https://codeforces.com/gym/106782/problem/J
//
//
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
//	int n, c;
//	cin >> n >> c;
//
//	vector<ll>a(n + 1, 0);
//	for (int i = 1; i <= n; ++i)
//		cin >> a[i];
//
//	ll ans = 0;
//	int i = n;
//	ll cur = c; 
//
//	while (i > 0) {
//		if (a[i] == 0) {
//			--i;
//			continue;
//		}
//
//		if (a[i] >= c) {
//			ll cnt = a[i] / c;
//			ans += cnt * i * 2;
//			a[i] %= c;
//		}
//		else if (a[i] != 0) {
//			ans += i * 2;
//			cur = c;
//
//			while (cur > 0 && i > 0) {
//				if (a[i] > cur) {
//					a[i] -= cur;
//					break;
//				}
//
//				cur -= a[i];
//				--i;
//			}
//		}
//
//	}
//	cout << ans << "\n";
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	solve();
//
//	return 0;
//}