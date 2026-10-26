//
//
//
////https://codeforces.com/gym/106782/problem/D
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n;
//
//void dfs(int x){
//    if (x > n)
//        return;
//
//    dfs(x + 1);
//    cout << x << ' ';
//
//    dfs(x + 1);
//    cout << x << ' ';
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    cin >> n;
//    cout << ((1 << (n + 1)) - 2) << '\n';
//
//    dfs(1);
//
//    return 0;
//}
