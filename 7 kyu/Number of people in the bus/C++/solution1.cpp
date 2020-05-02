#include <utility>
#include <vector>

using namespace std;

unsigned int number(const std::vector<std::pair<int, int>>& busStops)
{
  auto countIn = 0;
  auto countOut = 0;
  for(auto& x : busStops)
  {
    countIn += x.first;
    countOut += x.second;
  }
  return countIn - countOut;
}
