#include <vector>
using namespace std;

int arrayPlusArray(std::vector<int> a, std::vector<int> b)
{
  int sum = 0;
  for(auto& x : a) sum += x;
  for(auto& y : b) sum += y;
  return sum;
}
