//
//
////https://codeforces.com/gym/106825/problem/E
//
////2的8次幂是256
////有想法 但是缺乏一点常识 想当然的 不敢去细想
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
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int n;
//	cin >> n;
//
//	int N = 1 << n;
//
//	vector<ll>g(N + 1), m(N + 1);
//
//	for (int i = 1; i <= N; ++i)
//		cin >> g[i];
//	for (int i = 1; i <= N; ++i)
//		cin >> m[i];
//
//	vector<ll>cand;
//	cand.push_back(0);
//
//	for (int i = 1; i <= N; ++i)
//		for (int j = i + 1; j <= N; ++j)
//			cand.push_back(llabs(g[i] - g[j]) + 1);
//
//	sort(cand.begin() + 1, cand.end());
//	cand.erase(unique(cand.begin() + 1, cand.end()), cand.end());
//	
//
//	ll ans = -1;
//	ll sum = 0;
//
//	for (ll c : cand) {
//		vector<int>now(N , 0);
//
//		for (int i = 0; i < N; ++i)
//			now[i] = i + 1;
//
//		ll cur = 0;
//
//
//		for (int i = 1; i <= n; ++i) {
//			vector<int>tmp;
//
//			for (int j = 0; j < now.size(); j += 2) {
//				int x = g[now[j]];
//				int y = g[now[j + 1]];
//
//				cur += m[now[j]] + m[now[j + 1]];
//				if (x < y)
//					x += c;
//				else
//					y += c;
//
//				if (x > y)
//					tmp.push_back(now[j]);
//				else
//					tmp.push_back(now[j + 1]);
//			}
//
//			now = move(tmp);
//
//		}
//
//		if (sum < cur) {
//			ans = c;
//			sum = cur;
//		}
//	}
//	
//	cout << sum << "\n";
//	cout << ans << "\n";
//	
//	return 0;
//}