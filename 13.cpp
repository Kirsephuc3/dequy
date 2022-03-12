//#include<iostream>
//#include<iomanip>
//using namespace std;
//int gt(int n)
//{
//    if (n == 0 || n == 1)
//        return 1;
//    else
//        return gt(n - 1) * n;
//}
//int tohop(int n, int k)
//{
//    return gt(n) / (gt(k) * gt(n - k));
//}
//void pas(int n) {
//    if (!(n - 1))
//        cout << setw(4) << 1;
//    else {
//        pas(n - 1);
//        cout << endl;
//        for (int i = 0; i < n; i++)
//            cout << setw(4) << tohop(n - 1, i);
//    }
//}
//int main()
//{
//    int n;
//    cout << "Nhap vao pascal n = ";
//    cin >> n;
//    pas(n);
//    cout << endl;
//    return 0;
//}