#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define max 100


    /*int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (max[i] % 2 == 1)
    {
      count++;
    }
  }

return count;
*/
    int main()
{

  int a[max];

  srand(time(NULL));
  for (int i = 0; i < max; i++)
  {
    a[i] = rand() % 10 + 1;
  }
  for (int i = 0; i < max; i++)
  {
    cout << "a("<< a[i] <<")" << endl;
  }

  return 0;
}