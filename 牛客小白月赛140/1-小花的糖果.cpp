//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int n, k;
//	cin >> n >> k;
//
//	int sum = 0;
//	for (int i = 1; i <= n; ++i) {
//		if (i & 1)
//			sum += k;
//		else
//			sum += k + 1;
//
//		if (sum >= n) {
//			cout << i << "\n";
//			break;
//		}
//	}
//
//	return 0;
//}