#include <vector>

// O(n) - for loop
int save(std::vector<int> sizes, int hd) 
{
  auto size(0);
  auto counter(0);
  for(auto& x : sizes)
  {
    size += x;
    if(size <= hd)
    {
      counter++;
    }
  }
  return counter;
}
