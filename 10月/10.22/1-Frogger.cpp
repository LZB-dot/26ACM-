//
////http://poj.org/problem?id=2253
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
//#include<random>
//
//using namespace std;
//
//typedef long long ll;
//
//const int MAXN = 210;
//const int MAXM = 20010;
//const double eps = 1e-6;
//
//double cal(const pair<double, double>& p1,const pair<double, double>& p2) {
//	double x = p1.first - p2.first;
//	double y = p1.second - p2.second;
//
//	return x * x + y * y;
//}
//
//void solve() {
//	int n;
//	int t = 0;
//
//	while (cin >> n && n != 0) {
//		++t;
//
//		vector<pair<double, double>>a(n + 1);
//		for (int i = 1; i <= n; ++i)
//			cin >> a[i].first >> a[i].second;
//
//		double l = 0;
//		double r = 2e6;
//		double ans = r;
//
//		auto check = [&](const double mid)->bool {
//			vector<bool>vis(n + 1, 0);
//
//			queue<int>q;
//			q.push(1);
//
//			while (!q.empty()) {
//				int u = q.front();
//				q.pop();
//
//				if (vis[u])
//					continue;
//
//				vis[u] = 1;
//
//				for (int i = 1; i <= n; ++i) {
//					if (vis[i])
//						continue;
//
//					if (i != u) {
//						double cur = cal(a[u], a[i]);
//						if (cur <= mid)
//							q.push(i);
//					}
//				}
//			}
//
//			return vis[2];
//
//			};
//
//		while (r - l > eps) {
//			double mid = (l + r) / 2.0;
//
//			if (check(mid)) {
//				ans = mid;
//				r = mid;
//			}
//			else
//				l = mid;
//		}
//
//		cout << "Scenario #" << t << "\n";
//		printf("Frog Distance = %.3lf\n\n", sqrt(ans));
//	}
//
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