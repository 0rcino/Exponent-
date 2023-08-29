/*Create a Program that shall simulate how exponents work,
provided the base and exponent*/

// Program # 01

// Create by Allen callsign AJ

#include <iostream>
#include <cmath> // use cmath for library of pow 
using namespace std;

int main()
{

  int b; // use int for the whole number
  int e;

  cout << "Enter the Base: ";
  cin >> b;

  cout << "Enter the Exponent: ";
  cin >> e;

  for (int i = 1; i <= e; i++) // use for to many times you want to loop 
  {
    cout << " = " << pow(b, i); // use pow for returns the value of b to the power of i
    for (int a = 1; a <= e - i; a++) // use for to many time you want to loop 
    {
      cout << " X " << b;
    }
    cout << endl;
  }
}