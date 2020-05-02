#include <string>

bool is_uppercase(const std::string &s) 
{
  bool isUpper(true);
  
  for(auto& x : s)
  {
    if(islower(x)) isUpper = false;
  }
  
  return isUpper;
}
