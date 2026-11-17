//
//
////https://codeforces.com/gym/106826/problem/H
//
////ai
////更改二分的值 使得含义精确 避免边界讨论
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int x = 1e9;
//    cout << "? " << x << "\n";
//    cout.flush();
//
//    int f;
//    cin >> f;
//
//    int s = (f == 1 ? 1 : 2);
//
//    auto check = [&](const int& x)->bool {
//        cout << "? " << x << "\n";
//        cout.flush();
//
//        int y;
//        cin >> y;
//
//        return y == f;
//    };
//
//    // n = s + 2 * k
//    int l = 0, r = (1e9 - s) / 2;
//
//    while (l < r) {
//        int mid = l + (r - l) / 2;
//        int w = 2 * mid + 3;
//
//        if (check(w))
//            r = mid;
//        else
//            l = mid + 1;
//    }
//
//    cout << "! " << s + 2 * l << "\n";
//    cout.flush();
//
//    return 0;
//}
