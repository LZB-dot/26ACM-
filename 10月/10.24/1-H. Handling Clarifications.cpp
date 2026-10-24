//
////https://codeforces.com/gym/106646/problem/H
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
//	int n;
//	cin >> n;
//
//	int m = 2 * n;
//
//	vector<ll>a(m + 1, 0), b(m + 1, 0);
//	ll suma = 0;
//
//	for (int i = 1; i <= m; ++i) {
//		cin >> a[i];
//		suma += a[i];
//	}
//
//	for (int j = 1; j <= m; ++j)
//		cin >> b[j];
//
//	priority_queue<ll>pq;
//	ll sumw = 0;
//
//	for (int i = 1; i <= m; ++i) {
//		ll w = a[i] + b[i];
//		pq.push(w);
//
//		sumw += w;
//
//		int mx = i / 2;
//
//		if (pq.size() > mx) {
//			sumw -= pq.top();
//			pq.pop();
//		}
//	}
//
//	cout << suma - sumw << "\n";
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