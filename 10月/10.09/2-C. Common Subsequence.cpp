////
//////https://codeforces.com/gym/102307/problem/C
//////对角线dp
////
////#include<iostream>
////#include<vector>
////
////using namespace std;
////
////string a, b;
////int n;
////
////bool check() {
////	int mi = ceil(0.99 * n);
////	//最大不匹配长度
////	int k = n - mi;
////
////	int band = 2 * k + 1;
////
////	vector<vector<int>>dp(n + 1, vector<int>(band, -1));
////	dp[0][k] = 0;
////
////	for (int i = 0; i < n; ++i) {
////		for (int d = -k; d <= k; ++d) {
////			int offset = d + k;
////			int j = i + d;
////
////			if (dp[i][offset] < 0)
////				continue;
////
////			int cur = dp[i][offset];
////
////			if (i < n && j >= 0 && j < n && a[i] == b[j])
////				dp[i + 1][offset] = max(dp[i + 1][offset], cur + 1);
////
////			if (i < n && d - 1 >= -k)
////				dp[i + 1][offset - 1] = max(dp[i + 1][offset - 1], cur);
////
////			if (j < n && d + 1 <= k)
////				dp[i][offset + 1] = max(dp[i][offset + 1], cur);
////
////		}
////	}
////
////	int ans = dp[n][k];
////	return ans >= mi ? 1 : 0;
////}
////
////int main() {
////	ios::sync_with_stdio(false);
////	cin.tie(nullptr);
////	 
////	cin >> a >> b;
////
////	n = a.size();
////
////	if (check())
////		cout << "Long lost brothers D:\n";
////	else
////		cout << "Not brothers :(\n";
////
////	return 0;
////}
//
//
////https://codeforces.com/gym/102307/problem/C
////对角线dp
//
//#include<iostream>
//#include<vector>
//#include<cmath>
//#include<algorithm>
//
//using namespace std;
//
//string a, b;
//int n;
//
//bool check() {
//	int mi = ceil(0.99 * n - 1e-9);
//	//最大不匹配长度
//	int k = n - mi;
//
//	int band = 2 * k + 1;
//
//	vector<int>prev(band, -1);
//	for (int d = 0; d <= k; ++d) 
//		prev[d + k] = 0;
//	
//
//	for (int i = 1; i <= n; ++i) {
//		vector<int>tmp(band, -1);
//
//		for (int d = -k; d <= k; ++d) {
//			int offset = d + k;
//			int j = i + d;
//
//			int cur = prev[offset];
//
//			if (j >= 1 && j <= n && a[i - 1] == b[j - 1] && prev[offset] != -1)
//				tmp[offset] = max(prev[offset], cur + 1);
//
//			//垂直向下转移，偏移量加1
//			if (offset + 1 < band && prev[offset + 1] != -1)
//				tmp[offset] = max(tmp[offset], prev[offset + 1]);
//
//			//水平向右转移，同一层
//			if (offset - 1 >= 0 && tmp[offset - 1] != -1) 
//				tmp[offset] = max(tmp[offset], tmp[offset - 1]);
//			
//		}
//
//		prev = tmp;
//	}
//
//	int ans = prev[k];
//	return ans >= mi ? 1 : 0;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> a >> b;
//
//	n = a.size();
//
//	if (check())
//		cout << "Long lost brothers D:\n";
//	else
//		cout << "Not brothers :(\n";
//
//	return 0;
//}