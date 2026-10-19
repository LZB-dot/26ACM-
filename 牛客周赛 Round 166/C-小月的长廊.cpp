//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<cmath>
//
//using namespace std;
//
//#define pii pair<int,int>
//
//typedef long long ll;
//
//vector<int>tmp;
//
//int get(int x) {
//	return lower_bound(tmp.begin(), tmp.end(), x) - tmp.begin() + 1;
//}
//
//void solve() {
//	int n, p;
//	cin >> n >> p;
//
//	vector<pii>a(n + 1);
//
//	for (int i = 1; i <= n; ++i) {
//		cin >> a[i].first >> a[i].second;
//		tmp.push_back(a[i].first);
//		tmp.push_back(a[i].second);
//	}
//
//	sort(tmp.begin(), tmp.end());
//	tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
//
//	vector<int>diff(tmp.size() + 2, 0);
//
//	for (int i = 1; i <= n; ++i) {
//		int l = get(a[i].first);
//		int r = get(a[i].second);
//		diff[l]++;
//		diff[r + 1]--;
//	}
//
//	vector<int>num(tmp.size() + 1, 0);
//	for (int i = 1; i <= tmp.size(); ++i)
//		num[i] = num[i - 1] + diff[i];
//
//	int ans = 0;
//	for (int i = 1; i <= n; ++i) {
//		int l = get(a[i].first);
//		int r = get(a[i].second);
//		if (abs(num[l] - num[r]) >= p)
//			++ans;
//	}
//
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