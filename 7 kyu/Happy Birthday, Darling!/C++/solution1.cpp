#include <string>
using namespace std;

std::string womens_age(unsigned n) 
{
  if(n % 2 == 0)
  {
    return to_string(n) + "? That's just " + to_string(20) + ", in base " + to_string(n/2) + "!";
  }
  else
  {
    return to_string(n) + "? That's just " + to_string(21) + ", in base " + to_string((n-1)/2) + "!";
  }
}
