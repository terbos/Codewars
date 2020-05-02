#include <vector>
#include <algorithm>

int findOdd(const std::vector<int>& numbers)
{
  int theNum;
  for(unsigned int i = 0; i < numbers.size(); i++)
  {
    int num = count(numbers.begin(), numbers.end(), numbers[i]);
    if(num % 2 != 0) { theNum = numbers[i]; }
  }
  
  return theNum;
}
