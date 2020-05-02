#include <vector>

int positive_sum (const std::vector<int> arr){
  
  auto sum = 0;
  
  for(auto& x : arr)
  {
    if(x >= 0)
    {
      sum+=x;
    }
  }
  return sum;
}
