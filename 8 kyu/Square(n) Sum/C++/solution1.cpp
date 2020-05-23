#include <vector>
using namespace std;


int square_sum(const std::vector<int>& numbers)
{
    auto sum(0);
    for(auto& num : numbers)
    {
      sum += num * num;
    }
    
    return sum;
}
