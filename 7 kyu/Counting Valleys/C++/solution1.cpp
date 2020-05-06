#include <string>
using namespace std;

// O(n)
int countValleys(const std::string& s)
{
  auto currentLevel(0);
  auto previousLevel(0);
  auto valleys(0);
  for(unsigned int i = 0; i < s.size(); i++)
  {
    previousLevel = currentLevel;
    if(s[i] == 'U') currentLevel++;
    if(s[i] == 'D') currentLevel--;
    if(previousLevel < 0 && currentLevel == 0)
    {
      valleys++;
    }
  }
  return valleys;
}
