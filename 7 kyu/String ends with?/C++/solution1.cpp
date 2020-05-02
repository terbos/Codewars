bool solution(std::string const &str, std::string const &ending) 
{
  cout << str << " && " << ending << endl;
  string str1 = str;
  string str2 = str1;
  int end  = str2.length();
  if(str.size() < ending.size())
  {
    return false;
  }
  else
  {
    int start = end - ending.size();
    str2 = str1.substr(start,end);
    if(str2 == ending)
      return true;
    else
      return false;  
  }
  
}
