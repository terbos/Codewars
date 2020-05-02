#include <vector>
#include <algorithm>

int findOdd(const std::vector<int>& numbers)
{
  for(auto& x : numbers)
  {
    if(count(numbers.begin(), numbers.end(), x) % 2 != 0)
      return x;
  }
  return 0;
}
