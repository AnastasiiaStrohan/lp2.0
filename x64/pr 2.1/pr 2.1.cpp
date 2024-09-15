#include <iostream>
#include <cmath>

using namespace std;
int main()
{

 
 double x; // вхідний параметр
 double z1; // результат обчислення 1-го виразу
 double z2; // результат обчислення 2-го виразу
 double sqrt_part = sqrt(x * x - 9);
 cout << "x = "; cin >> x;
 z1 = (x * x + 2 * x - 3 + (x + 1) * sqrt_part) / (x * x - 2 * x - 3 + (x - 1) * sqrt_part);
 z2 = sqrt((x + 3) / (x - 3));
 cout << endl;
 cout << "z1 = " << z1 << endl;
 cout << "z2 = " << z2 << endl;
 cin.get();
 return 0;
}
	