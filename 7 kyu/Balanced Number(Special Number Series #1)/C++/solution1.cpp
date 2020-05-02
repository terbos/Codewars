#include <string>
#include <vector>
using namespace std;

string balancedNum (unsigned long long int number )
{
  string isBalanced;
  string numStr = to_string(number);
  long int leftSum = 0;
  long int rightSum = 0;
  
  unsigned long numLen =  numStr.length();
  auto oddevendg = numLen % 2;
  
  cout << numStr << endl;
  
  if(oddevendg == 0)
  {
    if(numLen == 0 || numLen == 2)
    {
      isBalanced = "Balanced";
    }
    if(numLen > 2)
    {
      for(unsigned int i = 0; i < numLen; i++)
      {
        if(i < (numLen/2-1))
          leftSum += (int(numStr[i]) - 48);
        if(i > (numLen/2))
          rightSum += (int(numStr[i]) - 48);
      }
      if(leftSum == rightSum)
      {
        isBalanced = "Balanced";
      }
      else
      {
        isBalanced = "Not Balanced";
      }
    }
  }
  if(oddevendg == 1)
  {
    if(numLen == 1)
    {
      isBalanced = "Balanced";
    }
    if(numLen == 3)
    {
      if(numStr[0] == numStr[2])
      {
        isBalanced = "Balanced";
      }
      else
      {
        isBalanced = "Not Balanced";
      }
    }
    if(numLen > 3)
    {
      for(unsigned int i = 0; i < numLen; i++)
      {
        if(i < (numLen/2))
          leftSum += (int(numStr[i]) - 48);
        if(i > (numLen/2))
          rightSum += (int(numStr[i]) - 48);
      }
      if(leftSum == rightSum)
      {
        isBalanced = "Balanced";
      }
      else
      {
        isBalanced = "Not Balanced";
      }
    }
  }

  return isBalanced ;
}
