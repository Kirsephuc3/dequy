// #include<iostream>
// #include<cstdlib>
//#include<ctime>
// using namespace std;
// int min(int a[10] , int n)
// {
//     if(n==0)
//         return 0;
//     if(n==1)
//         return a[0];
//     else
//     {
//         if(a[n-1]>min(a,n-1))
//             return min(a,n-1);
//         else
//             return a[n-1];
//     }
// }
// int main ()
// {
//     int n , a[10];
//     cout << "Nhap vao so phan tu n = ";
//     cin >> n;
//     cout << "Mang ngau nhien : ";
//     srand(time(NULL));
//     for(int i = 0;i<n;i++)
//     {
//         a[i] = rand() % 10;
//         cout << a[i] << ", ";
//     }
//     cout << endl;
//     cout << "Gia tri nho nhat trong mang la " << min (a,n) << endl;
//     return 0;
// }