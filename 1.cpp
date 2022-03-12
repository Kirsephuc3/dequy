//#include<iostream>
//using namespace std;
//int S1(int n) {
//	if (n == 1)
//		return 1;
//	else
//		return n + S1(n - 1);
//}
//int S2(int n) {
//	if (n == 1)
//		return 1;
//	else
//		return n * n + S2(n - 1);
//}
//float S3(float n) {
//	if (n == 1)
//		return 1;
//	if (n > 0)
//		return 1.0 / (2 * n - 1) + S3(n - 1);
//}
//int S4(int n) {
//	if (n == 1)
//		return 1;
//	else
//		return n * S4(n - 1);
//}
//int main() {
//	int n;
//	cout << " Nhap so n can tinh tong: ";
//	cin >> n;
//	cout << " Tong cua S1 la: " << S1(n) << endl;
//	cout << " Tong cua S2 la: " << S2(n) << endl;
//	cout << " Tong cua S3 la: " << S3(n) << endl;
//	cout << " Tong cua S4 la: " << S4(n) << endl;
//	return 0;
//}