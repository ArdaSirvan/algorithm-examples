#include <iostream>

using namespace std;

float
avgFinder (int total_number)
{
  float result = 0;
  float number;
  float average;
  int credit = 0;
  int total_credit = 0;

  for (int i = 1; i <= total_number; i++)
    {
      cout << "sayi giriniz: ";
      cin >> number;
      cout << "kredi giriniz: ";
      cin >> credit;
      number = credit * number;
      result = number + result;
      total_credit = credit + total_credit;
    }
  average = result / total_credit;
  return average;
}

int
main ()
{
  int total_number;
  cout << "kac sayi giriceksiniz: ";
  cin >> total_number;
  cout << avgFinder (total_number);
}
