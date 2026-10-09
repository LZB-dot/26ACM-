//
////数组：1 3 3 3 5
////      0 1 2 3 4
////查找 x = 3
////
////(1) upper_bound 第一个 > 3 的下标：4
////(2) lower_bound 第一个 >= 3 的下标：1
////(3) 第一个等于3：下标1
////(4) 最后一个等于3：下标3
////(5) 最后一个 <= 3：下标3
////(6) 最后一个 < 3：下标0
////(7) 等于3的元素总个数：3
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main(){
//    int a[] = { 1, 3, 3, 3, 5 };
//    int n = sizeof(a) / sizeof(a[0]);
//
//    int x = 3;
//    cout << "数组：";
//    for (int i = 0; i < n; i++) 
//        cout << a[i] << " ";
//    cout << "\n查找 x = " << x << "\n\n";
//
//    // (1) 第一个大于 x 的元素位置 upper_bound
//    int pos1 = upper_bound(a, a + n, x) - a;
//    cout << "(1) upper_bound 第一个 > " << x << " 的下标：" << pos1 << endl;
//
//    // (2) 第一个 >= x 的元素位置 lower_bound
//    int pos2 = lower_bound(a, a + n, x) - a;
//    cout << "(2) lower_bound 第一个 >= " << x << " 的下标：" << pos2 << endl;
//
//    // (3) 第一个等于x的元素
//    cout << "(3) 第一个等于" << x << "：";
//    if (pos2 < n && a[pos2] == x) 
//        cout << "下标" << pos2 << endl;
//    else 
//        cout << "不存在" << endl;
//
//    // (4) 最后一个等于x的元素
//    cout << "(4) 最后一个等于" << x << "：";
//    int pos4 = pos1 - 1;
//    if (pos4 >= 0 && a[pos4] == x)
//        cout << "下标" << pos4 << endl;
//    else
//        cout << "不存在" << endl;
//
//    // (5) 最后一个 <= x 的元素
//    cout << "(5) 最后一个 <= " << x << "：";
//    int pos5 = pos1 - 1;
//    if (pos5 >= 0)
//        cout << "下标" << pos5 << endl;
//    else
//        cout << "不存在" << endl;
//
//    // (6) 最后一个小于x的元素
//    cout << "(6) 最后一个 < " << x << "：";
//    int pos6 = pos2 - 1;
//    if (pos6 >= 0)
//        cout << "下标" << pos6 << endl;
//    else 
//        cout << "不存在" << endl;
//
//    // (7) x的总个数
//    int cnt = upper_bound(a, a + n, x) - lower_bound(a, a + n, x);
//    cout << "(7) 等于" << x << "的元素总个数：" << cnt << endl;
//
//    return 0;
//}
//
