#include <string>
#include <vector>

using namespace std;

std::vector<std::string> top3(
        const std::vector<std::string>& products,
        const std::vector<int>& amounts,
        const std::vector<int>& prices)
{
    int size = products.size();
    vector<pair<int,string>> vec;
    
    for(int i = 0; i < size; i++)
    {
      vec.push_back(make_pair(amounts[i]*prices[i], products[i]));
    }
    
    sort(vec.begin(), vec.end(),[](const pair<int,string> &a, const pair<int,string> &b) { return (a.first > b.first);});
    
    vector<string> rtrn;
    
    for(auto& x : vec)
    {
      rtrn.push_back(x.second);
    }
    
    rtrn.resize(3);
    return rtrn;
}
