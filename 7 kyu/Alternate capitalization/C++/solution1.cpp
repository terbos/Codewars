#include <string>
#include <utility>
using namespace std;
std::pair<std::string, std::string> capitalize(const std::string &s)
{
    //capitalize odd
    string oddCap = s;
    for(string::size_type i = 0; i < s.size(); i+=2)
    {
      oddCap[i] = toupper(s[i]);
    }
    
    //capitalize even
    string evenCap = s;
    for(string::size_type i = 1; i < s.size(); i+=2)
    {
      evenCap[i] = toupper(s[i]);
    }
    
    return {oddCap, evenCap};
}
