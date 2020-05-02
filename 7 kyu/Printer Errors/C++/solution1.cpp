class Printer
{
public:
    static std::string printerError(const std::string &s);
};

std::string Printer::printerError(const std::string& s)
{
  auto errCnt = 0;
  for(auto i = 0; i < s.length(); i++)
  {
    if(s[i] < 'a' || s[i] > 'm') 
      errCnt++;
  }
  
  return std::to_string(errCnt) + "/" + std::to_string(s.length());
}
