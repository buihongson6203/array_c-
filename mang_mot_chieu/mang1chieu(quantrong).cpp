
#include <iostream>
#include <cstdlib>
#include <ctime>
#define max 100
using namespace std;
void nhapmang(int arr[], int &n);
void xuatmang(int arr[], int n);
void saochepmang(int ra[], int vao[], int n);
int timkiem(int arr[], int n, int x);
void hoanvi(int &a, int &b);
void sapxeptang(int arr[], int n);
void themphantu(int a[], int &n, int idx, int x);
int main()
{
  int myarr[max];
  int nsize;
  nhapmang(myarr, nsize);
  xuatmang(myarr, nsize);
  cout << "sau khi sap xep: " << endl;
  sapxeptang(myarr, nsize);
  xuatmang(myarr, nsize);
  cout << "nhap gia tri can them: " << endl;
  int x;
  cin >> x;
  cout << " nhap vi tri can them " << endl;
  int idx;
  cin >> idx;
  themphantu(myarr, nsize, idx, x);
  xuatmang(myarr, nsize);
}
void nhapmang(int arr[], int &n)
{
  srand(time(NULL));
  cout << "nhap so phan tu";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    arr[i] = rand() % 100 + 1;
  }
}
void xuatmang(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
}
void saochepmang(int ra[], int vao[], int n)
{
  for (int i = 0; i < n; i++)
  {
    ra[i] = vao[i];
  }
}
int timkiem(int arr[], int n, int x)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      return i;
    }
  }
  return -1;
}
void hoanvi(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
void sapxeptang(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
        hoanvi(arr[i], arr[j]);
    }
  }
}
void themphantu(int a[], int &n, int idx, int x)
{
  if (idx >= 0 && idx <= n)
  {
    for (int i = n; i > idx; i--)
    {
      a[i] = a[i - 1];
      a[idx] = x;
      n++;
    }
  }
}
