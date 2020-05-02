#include <vector>

std::vector<int> two_oldest_ages(std::vector<int> ages)
{
    sort(ages.rbegin(), ages.rend());
    ages.resize(2);
    sort(ages.begin(), ages.end());
    return ages;
}
