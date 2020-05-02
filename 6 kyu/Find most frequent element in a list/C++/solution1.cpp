#include <algorithm>
#include <unordered_map>
pair<int,int> findMostFrequent(forward_list<int> l)
{
  pair<int,int> output;

  unordered_map<int,int> frequency;
  
  int closerToHead = *(l.begin());
  cout << "Closer to head: " << closerToHead << endl;
  
  for(auto& i : l)
  {
    //cout << i << " ";
    frequency[i]++;
  }
  cout << endl;
  for(auto& x : frequency)
  {
    if(x.second > output.second)
    {
      output.first = x.first;
      output.second = x.second;
      cout << "Frequency first: " << output.first << " & Frequency second: " << output.second << endl;
    }
    else if(x.second == output.second)
    {
      output.first = closerToHead;
    }
  }
  
  
  return output;
}
