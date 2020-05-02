#include <vector>
#include <algorithm>
using namespace std;
int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
    int sum = 0;
    
    vector<vector<int>> num = numbers;
    
    for(auto& x : num)
    {
      sort(x.begin(), x.end());
      sum += x[0];
    }
    
    return sum;
}
