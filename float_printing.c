#include <iostream>
#include <bitset>
#include <stdint.h>
#include <math.h>
#include <sys/types.h>

using namespace std;

union my_float
{
  int32_t i;
  float f;

  struct
  {
    uint32_t significand : 23;
    uint32_t exponent : 8;
    uint32_t sign : 1;
  } parts;  
};


int main ()
{
  // declare and initialize a floating point number
  float f = 0.1f;

  // copy the floating point 
  my_float a;
  a.f = f;
  
  // print the float
  cout << endl << a.f << endl << endl;
  
  // print each part separately
  std::bitset<23> significand(a.parts.significand);
  std::bitset<8> exponent(a.parts.exponent);
  std::bitset<1> sign(a.parts.sign);
  
  cout << "Sign |Significand             |Exponent" << endl;
  cout << sign << "    |" << significand << " |" << exponent << endl;
  
  // print the decimal representations
  cout << endl << "Number represented: ";
  if (a.parts.sign == 0) cout << "+ ";
  else cout << "- ";

  // add "1." after "0b"
  // add -127 to the exponent
  cout << "0b1." << significand << " x 2 ** "
       << a.parts.exponent - 127 << endl; 
  
  return 0;
}
