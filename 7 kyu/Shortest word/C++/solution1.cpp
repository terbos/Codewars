int find_short(std::string str)
{
  istringstream ss(str);
  vector<string> vec;
  do
  {
    string word;
    ss >> word;
    vec.push_back(word);
  }while(ss);
  
  int size = numeric_limits<int>::max();
  
  for(auto& x:vec)
  {
    if(x.length() < size && x.length() > 0)
      size = x.length();
  }
  
  return size;
}
