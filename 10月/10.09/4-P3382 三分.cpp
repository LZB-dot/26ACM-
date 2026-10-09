//
////https://www.luogu.com.cn/problem/P3382
//
//
//
//#include<iostream>
//#include<vector>
//#include<cmath>
//#include<algorithm>
//
//using namespace std;
//
//const double eps = 1e-6;
//
//int n;
//double a[15];
//
//double cal(double x) {
//	double ans = 0;
//
//	for (int i = n; i >= 0; --i) 
//		ans = ans * x + a[i];
//
//	return ans;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> n;
//	double l, r;
//	cin >> l >> r;
//
//	for (int i = n; i >= 0; --i)
//		cin >> a[i];
//
//	while (r - l > eps) {
//		double k = (r - l) / 3;
//		double p1 = l + k;
//		double p2 = r - k;
//
//		if (cal(p1) < cal(p2))
//			l = p1;
//		else
//			r = p2;
//	}
//
//	printf("%.5lf\n", l);
//
//	return 0;
//}