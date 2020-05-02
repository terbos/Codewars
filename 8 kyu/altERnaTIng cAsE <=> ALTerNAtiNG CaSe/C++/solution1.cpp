#include <iostream>
#include <string>
using namespace std;

string to_alternating_case(const string& str)
{
  string altCaseStr = "";

  for(unsigned int i = 0; i < str.size(); ++i)
  {
    //cout << str[i] << endl;
    if(str[i] >= 'A' && str[i] <= 'Z') altCaseStr.push_back(tolower(str[i]));
    if(str[i] >= 'a' && str[i] <= 'z') altCaseStr.push_back(toupper(str[i]));
    if(str[i] < 'A') altCaseStr.push_back(str[i]);
    if(str[i] > 'Z' && str[i] < 'a') altCaseStr.push_back(str[i]);
    if(str[i] > 'z') altCaseStr.push_back(str[i]);
  }

  return altCaseStr;
}
