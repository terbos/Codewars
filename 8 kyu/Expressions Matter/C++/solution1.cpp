#include <vector>
#include <algorithm>
using namespace std;

unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    vector<unsigned short int> result;
    result.push_back(a * (b + c));
    result.push_back(a * b * c);
    result.push_back(a + b * c);
    result.push_back((a + b) * c);
    result.push_back(a + b + c);
    sort(result.rbegin(), result.rend());
    
    return result[0] ; 
}
