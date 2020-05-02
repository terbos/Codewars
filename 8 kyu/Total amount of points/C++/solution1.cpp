#include <array>
#include <string>

using namespace std;

int points(const std::array<std::string, 10>& games) 
{

  auto points = 0;
  
  for(auto& x : games)
  {
    if(x[0] > x[2])
      points += 3;
    if(x[0] < x[2])
      points += 0;
    if(x[0] == x[2])
      points += 1;
  }

  return points;
}
