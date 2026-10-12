//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<climits>
//#include<unordered_map>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 2e5 + 10;
//
//void solve() {
//	int n;
//	cin >> n;
//
//	unordered_map<ll, vector<int>>pos;
//	vector<ll>a(n + 1, 0);
//	for (int i = 1; i <= n; ++i) {
//		cin >> a[i];
//		pos[a[i]].push_back(i);
//	}
//
//	vector<ll>pre(n + 1, 0);
//
//	for (int i = 1; i <= n; ++i) {
//		if (i & 1)
//			pre[i] = pre[i - 1] + a[i];
//		else
//			pre[i] = pre[i - 1] - a[i];
//	}
//
//	ll ans = LLONG_MAX;
//
//	for (auto it : pos) {
//
//		if (it.second.empty())
//			continue;
//
//		ll cur = 0;
//		if (it.second.size() == 1) {
//			cur = pre[it.second[0] - 1];
//			cur -= (pre[n] - pre[it.second[0]]);
//		}
//		else {
//			cur = pre[it.second[0] - 1];
//			for (int j = 1; j < it.second.size(); ++j) {
//				if (j & 1)
//					cur -= (pre[it.second[j] - 1] - pre[it.second[j - 1]]);
//				else
//					cur += (pre[it.second[j] - 1] - pre[it.second[j - 1]]);
//			}
//
//			if (it.second.size() & 1)
//				cur -= (pre[n] - pre[it.second.back()]);
//			else
//				cur += (pre[n] - pre[it.second.back()]);
//		}
//
//		ans = min(ans, llabs(cur));
//	}
//
//	cout << ans << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	//int T;
//	//cin >> T;
//
//	//while (T--)
//	solve();
//
//
//	return 0;
//}