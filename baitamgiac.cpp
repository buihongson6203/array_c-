#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "nhap do dai canh a: ";
  cin >> a;
  cout << "nhap do dao canh b: ";
  cin >> b;
  cout << "nhap do dai canh c: ";
  cin >> c;
  if ((a < b + c) && (a > abs(b - c)))
  {
    cout << "no la mot tam giac" << '\n';
    if (a ^ 2 == b ^ 2 + c ^ 2 || b ^ 2 == a ^ 2 + c ^ 2 || c ^ 2 == a ^ 2 + b ^ 2)
    {
      cout << "no la tam giac vuong" << '\n';
    }
    else if (a == b && b == c)
    {
      cout << "no la tam giac deu " << '\n';
    }
    else if (a == b || a == c || b == c)
    {
      cout << "no la tam giac can" << '\n';
    }
    else if (a ^ 2 > b ^ 2 + c ^ 2 || b ^ 2 > c ^ 2 + a ^ 2 || c ^ 2 > a ^ 2 + b ^ 2)
    {
      cout << "no la tam giac tu" << '\n';
    }
  }
  else
  {
    cout << "no la tam giac nhon";
  }
}
