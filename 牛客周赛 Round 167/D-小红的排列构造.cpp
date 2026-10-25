//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring> 
//#include<queue>
//#include<unordered_map>
//#include<map>
//#include<climits>
//#include<bitset>
//
//using namespace std;
//
//typedef long long ll;
//
//void solve() {
//    int n;
//    cin >> n;
//
//    int a = 0, b = 0, c = 0;
//    string s;
//    cin >> s;
//
//    for (char tc : s) {
//        if (tc == 'a')
//            ++a;
//        else if (tc == 'b')
//            ++b;
//        else
//            ++c;
//    }
//
//    ll sum = 1LL * n * (n + 1) / 2;
//
//    if ((a == 0 && b == 0) || (a == 0 && c == 0) || (c == 0 && b == 0)) {
//        if (sum & 1)
//            cout << "-1\n";
//        else {
//            for (int i = 1; i <= n; ++i)
//                cout << i << " ";
//            cout << "\n";
//        }
//        return;
//    }
//
//    if (a == 0 && b != 0 && c != 0) {
//        if (sum & 1)
//            cout << "-1\n";
//        else {
//            int i = 1;
//            for (int x = 0; x < n; ++x) {
//                if (s[x] == 'b')
//                    cout << i++ << " ";
//            }
//            for (int x = 0; x < n; ++x) {
//                if (s[x] == 'c')
//                    cout << i++ << " ";
//            }
//            cout << "\n";
//        }
//        return;
//    }
//
//    if (a != 0 && b == 0 && c != 0) {
//        if (sum & 1)
//            cout << "-1\n";
//        else {
//            int i = 1;
//            for (int x = 0; x < n; ++x) {
//                if (s[x] == 'a')
//                    cout << i++ << " ";
//            }
//            for (int x = 0; x < n; ++x) {
//                if (s[x] == 'c')
//                    cout << i++ << " ";
//            }
//            cout << "\n";
//        }
//        return;
//    }
//
//    if (a != 0 && b != 0 && c == 0) {
//        if (sum & 1)
//            cout << "-1\n";
//        else {
//            int i = 1;
//            for (int x = 0; x < n; ++x) {
//                if (s[x] == 'a')
//                    cout << i++ << " ";
//            }
//            for (int x = 0; x < n; ++x) {
//                if (s[x] == 'b')
//                    cout << i++ << " ";
//            }
//            cout << "\n";
//        }
//        return;
//    }
//
//    int odd = (n + 1) / 2;
//
//    int oa = -1, ob = -1, oc = -1;
//
//    for (int i = sum % 2; i <= a; i += 2) {
//        for (int j = sum % 2; j <= b; j += 2) {
//            int k = odd - i - j;
//            if (k < 0)
//                continue;
//
//            if (k <= c && k % 2 == sum % 2) {
//                oa = i;
//                ob = j;
//                oc = k;
//                break;
//            }
//        }
//        if (oa != -1)
//            break;
//    }
//
//    if (oa == -1) {
//        cout << "-1\n";
//        return;
//    }
//
//    int i = 1;
//    int j = 2;
//    for (int x = 0; x < n; ++x) {
//        if (s[x] == 'a') {
//            if (oa > 0) {
//                cout << i << " "; 
//                i += 2;
//                oa--;             
//            }
//            else {
//                cout << j << " "; 
//                j += 2;
//            }
//        }
//        else if (s[x] == 'b') {
//            if (ob > 0) {
//                cout << i << " "; 
//                i += 2;
//                ob--;            
//            }
//            else {
//                cout << j << " "; 
//                j += 2;
//            }
//        }
//        else {
//            if (oc > 0) {
//                cout << i << " ";
//                i += 2;
//                oc--;      
//            }
//            else {
//                cout << j << " ";
//                j += 2;
//            }
//        }
//    }
//    cout << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    solve();
//
//    return 0;
//}