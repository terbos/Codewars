#include <vector>
std::vector<int> countBy(int x,int n)
{
  std::vector<int> result;
  for(auto i = 1; i <= n; i++)
  {
    result.push_back(x*i);
  }
  
  return result;
}
