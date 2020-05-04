#include <vector>
#include <algorithm>
using namespace std;

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
 vector<int> newList;
 
 for(unsigned int i = 0; i < arr.size(); i++)
 {
   auto it = find(arr.begin(), arr.end(), arr[i]);
   if(it != arr.end())
   {
     int counter = count(newList.begin(), newList.end(), *it);
     if(counter < n)
     {
       newList.push_back(*it);  
     }
   }
 }
  
  return newList;
}
