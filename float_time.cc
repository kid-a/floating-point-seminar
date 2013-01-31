#include <iostream>

using namespace std;

int main ()
{
  float time = 0.f;

  for (int i = 0;; ++i)
    {
      time += 0.1f;
      if (i % 50 == 0) cout << time << endl;
    }

  return 0;
}
