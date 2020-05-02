std::string repeater(std::string str, int n)
{
  std::string rtrn = "";
  for(auto i = 0; i < n; i++)
    rtrn += str;
  return rtrn;
}
