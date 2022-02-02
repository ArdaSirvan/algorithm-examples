#include <iostream>
#include <cmath>

using namespace std;

int main (){
  int a, b, c;
  cout << "ax^2 + bx + c = 0 probleminde x1 ve x2 sayilarinin bulunmasi."
    << endl;
  cout << "a sayisi: ";
  cin >> a;
  cout << "b sayisi: ";
  cin >> b;
  cout << "c sayisi: ";
  cin >> c;
  cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
  //diskriminant = b^2-4ac
  int disk = b * b - 4 * a * c;
  if (disk < 0)
    {
      cout <<
	"diskriminant negatif ciktigi icin gercek kok yoktur,sanal kok vardir." << endl;
      //x1 ve x2= (-b -+kok(disk))/2a
      cout << "x1 koku: " << "(-" << b << " - " << sqrt (-disk) << "i) / "<< 2*a << endl;
      cout << "x2 koku: " << "(-" << b << " + " << sqrt (-disk) << "i) / "<< 2*a << endl;
      cout << "x1 koku sadelesmis hali: " << -b/2*a << " - " << sqrt(-disk)/2*a<< "i" << endl;
      cout << "x2 koku sadelesmis hali: " << -b/2*a << " + " << sqrt(-disk)/2*a<< "i" << endl;
     }
  else
    {
      int x1 = (-b - sqrt (disk)) / 2 * a;
      int x2 = (-b + sqrt (disk)) / 2 * a;
      cout << "x1 koku: " << x1 << endl;
      cout << "x2 koku: " << x2;
    }

}