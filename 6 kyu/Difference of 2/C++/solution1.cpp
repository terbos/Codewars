#include <utility>
#include <vector>
#include <cmath>
using namespace std;

//O(n^2)
std::vector<std::pair<int, int>> twos_difference(const std::vector<int> &vec) 
{
  vector<pair<int,int>> result;
  
  unsigned int left;
  unsigned int right;
  if(!vec.empty())
  {
    for(left = 0; left < vec.size()-1; left++)
    {
      for(right = left+1; right < vec.size(); right++)
      {
        auto absLeft = abs(vec[left]);
        auto absRight = abs(vec[right]);
        auto difference = 0;
        if(absLeft > absRight)
        {
          difference = absLeft - absRight;
          if(difference == 2) result.push_back(make_pair(vec[right], vec[left]));
        }
        if(absRight > absLeft)
        {
          difference = absRight - absLeft;
          if(difference == 2) result.push_back(make_pair(vec[left], vec[right]));
        }
      }  
    }
  }
  
  sort(result.begin(), result.end());
  
  return result;
}
