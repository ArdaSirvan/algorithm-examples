#include <iostream>

using namespace std;

int
main ()
{
  int input, result = 1;
  cout << "Bir sayı giriniz: ";
  cin >> input;
  for (int i = input; i > 0; i--)
    {
      result *= i;
    }
  cout << "Sonuç: " << result;

}