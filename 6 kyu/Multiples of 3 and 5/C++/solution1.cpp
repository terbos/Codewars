#include <vector>
using namespace std;

int solution(int number) 
{
  auto counter = 0;
  vector<int> numVec;
  for(auto i = 1; i < number; i++)
  {
    numVec.push_back(i);
  }

  for(auto& x : numVec)
  {
    if((x % 3 == 0) || (x % 5 == 0))
    {
      counter += x;
    }
  }
    
  return counter;
}
