#include <vector>
#include <algorithm>
#include <cmath>
using namespace std; 

unsigned long long minValue (vector <int> values)
{
    sort(values.begin(), values.end());
    vector<int>::iterator iter = unique(values.begin(), values.end());
    values.resize(distance(values.begin(), iter));
    
    stringstream str;
    copy(values.begin(), values.end(), ostream_iterator<int>(str, ""));
    int res = stoi(str.str());
    
   return res ; 
}
