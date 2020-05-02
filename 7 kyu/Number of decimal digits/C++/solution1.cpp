#include <stdint.h>
#include <string>
using namespace std;

int digits(uint64_t n) 
{
  string str = to_string(n);
  return str.length(); 
}
