#include <string>
#include <vector>
#include <sstream>
#include <numeric>
using namespace std;

class Stat
{
public:
  static std::string stat(const std::string &strg);
  static string timeInHMSFormat(int number);
};

string Stat::timeInHMSFormat(int number)
{
  int hours = number / 3600;
  int minutes = (number - (hours * 3600)) / 60;
  int seconds = (number - (hours * 3600) - (minutes * 60));
  
  string strHours = (hours < 10) ? "0" + to_string(hours) : to_string(hours);
  string strMinutes = (minutes < 10) ? "0" + to_string(minutes) : to_string(minutes);
  string strSeconds = (seconds < 10) ? "0" + to_string(seconds) : to_string(seconds);
  
  return strHours + "|" + strMinutes + "|" + strSeconds;
}

string Stat::stat(const string& strg)
{
  vector<string> firstFilteredArray;
  stringstream stringStream1(strg);
  string breakToFirstDelim;
  while(getline(stringStream1, breakToFirstDelim, ','))
  {
    firstFilteredArray.push_back(breakToFirstDelim);
  }
  
  vector<int> secondFilteredArray;
  for(unsigned int i = 0; i < firstFilteredArray.size(); i++)
  {
    stringstream stringStream2(firstFilteredArray[i]);
    string breakToSecondDelim;
    while(getline(stringStream2, breakToSecondDelim, '|'))
    {
      secondFilteredArray.push_back(stoi(breakToSecondDelim));
    }
  }
  
  vector<int> finalArray;
  for(unsigned int i = 0; i < secondFilteredArray.size(); i +=3 )
  {
    auto hoursToSeconds = secondFilteredArray[i] * 3600;
    auto minutesToSeconds = secondFilteredArray[i+1] * 60;
    auto seconds = secondFilteredArray[i+2];
    finalArray.push_back(hoursToSeconds + minutesToSeconds + seconds);
  }
  
  sort(finalArray.begin(), finalArray.end());
  
  // Calculate range
  int range = finalArray[finalArray.size()-1] - finalArray[0];
  
  // Calculate Mean/Average
  int mean = accumulate(finalArray.begin(), finalArray.end(), 0) / finalArray.size();
  
  // Calculate Median
  int median = (finalArray.size() % 2 == 0)
  ? (finalArray[finalArray.size()/2] + finalArray[finalArray.size()/2 - 1])/2
  : finalArray[finalArray.size()/2];
  
  return "Range: " + timeInHMSFormat(range) + " Average: " + timeInHMSFormat(mean) + " Median: " + timeInHMSFormat(median);
}
