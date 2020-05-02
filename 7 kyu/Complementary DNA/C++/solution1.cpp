#include <string>
std::string DNAStrand(const std::string& dna)
{
  std::string toBeReturned = dna;
  
  for(auto i = 0; i < toBeReturned.size(); i++)
  {
    if(toBeReturned[i] == 'A')
      toBeReturned[i] = 'T';
    else if(toBeReturned[i] == 'T')
      toBeReturned[i] = 'A';
    else if(toBeReturned[i] == 'C')
      toBeReturned[i] = 'G';
    else if(toBeReturned[i] == 'G')
      toBeReturned[i] = 'C';
  }
  
  return toBeReturned;
}
