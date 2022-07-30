
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define max 10
int main()
{
  int d=1;
  
  int somax;
  int somin;
  int arr[max];
  srand(time(NULL));
  for (int i = 0; i < max; i++)
  {
    arr[i] = rand() % 100 + 1;
  }
  for (int i = 0; i < max; i++)
  {
    cout << arr[i] << " " << endl;
    if (somax < arr[i])
    {
      somax = arr[i];
    }
     if (somin > arr[i])
    {
      somin = arr[i];
    }
    
    
  }
  cout << "so lon nhat la: " << somax << endl;
  cout << "so be nhat la: " << somin << endl;
  for (int i = 2; i < max; i++)
  {  bool check= true;
   for (int j=2; j*j<=i; j++)
   {
     if( i % j == 0)
     { 
       check = false;
       break;
     }
   }if ( check ){
     cout << "  so nguyen to la:"<< i<< endl;
   }
   
  }
  
}
