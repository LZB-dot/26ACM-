//
////https://codeforces.com/gym/106764/problem/H
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//
//using namespace std;
//
//typedef long long ll;
//
//void solve() {
//	ll n, k;
//	cin >> n >> k;
//
//	vector<ll>d(n + 1, 0);
//
//	ll mi = LLONG_MAX, mx = LLONG_MIN;
//	for (ll i = 1; i <= n; ++i) {
//		cin >> d[i];
//		mi = min(mi, d[i]);
//		mx = max(mx, d[i]);
//	}
//
//	vector<ll>left_(n + 1, 0), right_(n + 1, 0);
//	vector<vector<ll> >Lsame(n + 1);
//
//	for (ll i = 1; i <= n; ++i) {
//		ll r;
//		cin >> r;
//
//		left_[i] = max(1LL, i - r);
//		right_[i] = min(n, i + r);
//
//		Lsame[left_[i]].push_back(i);
//	}
//
//
//
//	ll L = mi, R = mx + k;
//	ll ans = mi;
//
//	auto check = [&](const ll mid) {
//
//		priority_queue<pair<ll, ll>>pq;
//		
//		vector<ll>diff(n + 2, 0);
//		
//		ll res = 0;
//		ll add = 0;
//
//		for (ll i = 1; i <= n; ++i) {
//			add += diff[i];
//
//			for (ll j : Lsame[i])
//				pq.push({ right_[j],j });
//
//			while (!pq.empty() && pq.top().first < i)
//				pq.pop();
//
//			ll tmp = d[i] + add;
//
//			if (tmp < mid) {
//				if (pq.empty())
//					return false;
//
//				auto it = pq.top();
//
//				ll r = it.first;
//				ll pos = it.second;
//
//				res += (mid - tmp);
//
//				if (res > k)
//					return false;
//
//				diff[i] += (mid - tmp);
//				diff[r + 1] -= (mid - tmp);
//				add += (mid - tmp);
//			}
//		}
//
//		return true;
//	};
//
//	while (L <= R) {
//		ll mid = L + (R - L >> 1);
//
//		if (check(mid)) {
//			ans = mid;
//			L = mid + 1;
//		}
//		else
//			R = mid - 1;
//
//	}
//
//	cout << ans << "\n";
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