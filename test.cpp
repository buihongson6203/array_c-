/* #include <iostream>
using namespace std;
int main()
{
  int ngaysinh;
  int thang;
  int namsinh;
  cout << " nhap ngay thang nam sinh cua ban : " << endl;
  cin >> ngaysinh >> thang >> namsinh;
  cout << "ngay sinh cua ban la : " << ngaysinh << "/" << thang << "/" << namsinh << endl;

  return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
  int nam_sinh;
  int lop;
  cout << "bai code cua sonbeoismee" << endl<<endl;
  
  cout << setw(5) << left << "Ten :"<< setw(10) << left << "bui hong son"<<endl;
  cout << setw(10) << left << "bui hong son"<<endl;
  cin >> nam_sinh;
  cout << setw(20) << left << "nam sinh" << nam_sinh << endl;

  cin >> lop;
  cout << setw(20) << left << "lop:" << lop << endl;
  cout << setw(5) << left << "ma sinh vien : 2151052624"<<endl;
}

#include <iostream>
using namespace std;
int main()
{
  cout << "chieu dai :";
  int x;
  cin >> x;
  cout << "chieu rong :";
  int y;
  cin >> y;
  if (x > y)
    cout << "chu vi hinh chu nhat la :" << (x + y) * 2 << endl;
  else if (x < y)
    cout << "dien tich hinh chu nhat la :" << x * y << endl;
  else if (x = y)
    cout << "hinh chu nhat la hinh vuong co dien tich la :" << x * y << endl;
  return 0;
}

#include <iostream>
using namespace std;
int main()
{
  string name;
  string address;
  getline(cin, name); //tao khoang trang muon nhap
getline(cin,  address);
  cout << "Name :" << name << endl;
  cout << "Address: " << address << endl;

  return 0;
}
*/
#include <iostream>
using namespace std;
int main ()
{
  cout << "nhap so tuoi cua ban ";
  int tuoi;

  cin >>tuoi;
  cout <<"nhap so tuoi cua ban ";
  std::cin.ignore(32767,'\n');
  string name;
  getline(cin,name);
  cout << "hello" << name <<endl;
  cout <<"tuoi cua ban"<< tuoi<< endl;


}