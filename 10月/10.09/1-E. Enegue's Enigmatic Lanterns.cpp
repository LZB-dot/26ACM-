////https://codeforces.com/gym/102319/problem/E
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//bool check(int n) {
//    if (n <= 2)
//        return false;
//
//    for (int i = 2; i * i <= n; ++i) {
//        if (n % i == 0)
//            return true;
//    }
//
//    return false;
//}
//
//int cal(int n) {
//    if (n <= 0)
//        return 0;
//
//    int ans = 0;
//
//    for (int i = 1; i * i <= n; ++i) {
//        if (n % i == 0) {
//            int j = n / i;
//
//            if (i == j) {
//                if (check(i))
//                    ++ans;
//            }
//            else {
//                if (check(i))
//                    ++ans;
//
//                if (check(j))
//                    ++ans;
//            }
//        }
//    }
//
//    return ans;
//}
//
//int ask(const string& s) {
//    cout << "? " << s << endl;
//
//    int res;
//    cin >> res;
//
//    if (res == -1)
//        exit(0);
//
//    return res;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int n, k;
//    cin >> n >> k;
//
//    if (k == 0) {
//        cout << "! " << string(n, '0') << endl;
//        return 0;
//    }
//
//    if (k == n) {
//        cout << "! " << string(n, '1') << endl;
//        return 0;
//    }
//
//    int p1 = cal(k);
//    int p2 = cal(k - 1);
//
//    string ans(n, '0');
//
//    auto query = [&](string& ans, string& s) {
//        for (int i = 0; i < n; ++i) {
//
//            if (ans[i] == '1')
//                continue;
//
//            s[i] = '0';
//
//            int p = ask(s);
//
//            if (p != p1) 
//                ans[i] = '1';
//            
//
//            s[i] = '1';
//        }
//    };
//
//    if (p2 != p1) {
//        string s(n, '1');
//        query(ans, s);
//    }
//    else {
//
//        int d = -1;
//
//        for (int x = 2; x <= 3; ++x) {
//            if (cal(k - x) != p1) {
//                d = x;
//                break;
//            }
//        }
//
//        string s(n, '1');
//        if (d == 2) {
//            bool f = 0;
//
//            for (int i = 0; i < n; ++i) {
//                if (f)
//                    break;
//
//                for (int j = i + 1; j < n; ++j) {
//
//                    s[i] = '0';
//                    s[j] = '0';
//
//                    int p = ask(s);
//
//                    if (p != p1) {
//                        ans[i] = '1';
//                        ans[j] = '1';
//
//                        s[i] = '1';
//                        query(ans, s);
//                        f = 1;
//                        break;
//                    }
//
//                    s[i] = '1';
//                    s[j] = '1';
//                }
//            }
//
//        }
//        else {
//            bool f = 0;
//            for (int i = 0; i < n; ++i) {
//                if (f)
//                    break;
//
//                for (int j = i + 1; j < n; ++j) {
//                    if (f)
//                        break;
//
//                    for (int l = j + 1; l < n; ++l) {
//
//                        s[i] = '0';
//                        s[j] = '0';
//                        s[l] = '0';
//
//                        int p = ask(s);
//
//                        if (p != p1) {
//                            ans[i] = '1';
//                            ans[j] = '1';
//                            ans[l] = '1';
//
//                            s[i] = '1';
//                            query(ans, s);
//                            f = 1;
//                            break;
//                        }
//
//                        s[i] = '1';
//                        s[j] = '1';
//                        s[l] = '1';
//                    }
//                }
//            }
//        }
//    }
//
//    cout << "! " << ans << endl;
//
//    return 0;
//}