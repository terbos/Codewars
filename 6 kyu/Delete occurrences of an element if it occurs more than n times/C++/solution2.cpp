#include <unordered_map>
#include <vector>

std::vector<int> deleteNth(const std::vector<int>& xs, int n) {
  std::vector<int> res;
  std::unordered_map<int, int> ns;
  for (int x : xs)
    if (ns[x]++ < n)
      res.push_back(x);
  return res;
}
