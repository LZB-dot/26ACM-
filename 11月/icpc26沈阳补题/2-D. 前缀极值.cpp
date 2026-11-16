//
////·Ö¶Î¿¼ÂÇ
//
// 
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//typedef long long ll;
//
//void solve() {
//    ll n, a, b, k;
//    cin >> n >> a >> b >> k;
//
//    if (a + b > n + 1)
//        cout << "-1\n";
//    else if (a == 1 && b == 1) {
//        if (n == 1)
//            cout << "1\n";
//        else
//            cout << "-1\n";
//    }
//    else {
//        //9 4 1 5
//        //1 7 8 9 6 5 4 3 2 
//        if (b == 1) {
//            if (k == 1)
//                cout << "1\n";
//            else if (k <= a)
//                cout << n - a + k << "\n";
//            else
//                cout << n - k + 2 << "\n";
//        }
//        else {
//            //9 4 5 1
//            //6 7 8 9 5 4 3 1 2
//
//            //9 4 4 1
//            //6 7 8 9 5 4 1 3 2
//
//            //9 4 6 1
//            //6 7 8 9 5 4 3 2 1
//            if (k <= a)
//                cout << n - a + k << "\n";
//            else if (k == a + b - 1)
//                cout << "1\n";
//            else if (k < a + b - 1)
//                cout << n - k +1<< "\n";
//            else
//                cout << n - k + 2 << "\n";
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int T;
//    cin >> T;
//
//    while (T--)
//        solve();
//
//    return 0;
//}
