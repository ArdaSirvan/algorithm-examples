#include <iostream>

using namespace std;

int
main ()
{
  int temp1 = 1;
  int temp2 = 0;
  int result;
  for (int i = 1; i < 20; i++)
    {
      result = temp1 + temp2;
      cout << result << endl;
      temp1 = temp2;
      temp2 = result;
    }
  return 0;
}