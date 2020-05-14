#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) 
{
  auto classSum(0);
  auto classAverage(0);
  for(auto& grade : classPoints)
  {
    classSum += grade;
  }
  classAverage = classSum / classPoints.size();
  
  return (yourPoints > classAverage) ? true : false;
}
