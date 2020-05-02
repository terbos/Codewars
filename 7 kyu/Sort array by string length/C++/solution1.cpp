#include <map>

using namespace std;

class Kata
{
public:
    map<int, string> strMap;

    std::vector<std::string> sortByLength(std::vector<std::string> array)
    {
      for(unsigned int i = 0; i < array.size(); i++)
      {
        strMap.insert_or_assign(array[i].length(), array[i]);
      }
      
      array.erase(array.begin(), array.end());
      
      for(auto& x : strMap)
      {
        array.push_back(x.second);
      }
      
      return array;
    }
};
