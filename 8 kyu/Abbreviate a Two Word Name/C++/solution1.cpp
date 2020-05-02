#include <string>

using namespace std;

std::string abbrevName(std::string name)
{
  string returnStr;
  returnStr.push_back(toupper(name[0]));
  returnStr.push_back('.');
  returnStr.push_back(toupper(name[name.find(' ') + 1]));
  
  return returnStr;
}
