//#include<iostream>
//using namespace std;
//static int sum = 0; //luu gia tri
//static int suml = 0;
//int tinhtongc(int n) {
//    if (n == 0) 
//        return sum; 
//    int temp = n % 10;
//    if (temp % 2 == 0) 
//        sum += temp;
//    return tinhtongc(n / 10);
//}
//int tinhtongl(int n) {
//    if (n == 0)
//        return suml;
//    int temp = n % 10;
//    if (temp % 2 != 0)
//        suml += temp;
//    return tinhtongl(n / 10);
//}
//int main() {
//    int n;
//    cout << "Nhap so nguyen: ";
//    cin >> n;
//    cout << "Tong cac chu so chan cua so nguyen la: " << tinhtongc(n) << endl;
//    cout << "Tong cac chu so le cua so nguyen la: " << tinhtongl(n) << endl;
//    system("pause");
//    return 0;
//}