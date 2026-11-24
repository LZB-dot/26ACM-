//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//#define pll pair<ll,ll>
//#define pii pair<int,int>
//typedef long long ll;
//
//
//void solve() {
//    int n;
//    cin >> n;
//
//    string s;
//    cin >> s;
//    s = " " + s;
//
//    int red = 0, blue = 0;
//
//    string ss = " ";
//    for (int i = 1; i <= n;) {
//        int j = i;
//        while (j <= n && s[i] == s[j])
//            ++j;
//
//        if (s[i] == 'R')
//            ++red;
//        else if (s[i] == 'B')
//            ++blue;
//
//        ss += s[i];
//
//        i = j;
//    }
//
//    if (red > blue)
//        cout << "Blue\n";
//    else
//        cout << "Red\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    //int T;
//    //cin >> T;
//
//    //while (T--)
//        solve();
//
//    return 0;
//}
