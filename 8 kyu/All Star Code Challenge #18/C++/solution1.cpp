#include <string>
#include <algorithm>
using namespace std;

unsigned int strCount(std::string word, char letter)
{
  return count(word.begin(), word.end(), letter);
}
