using namespace std; 

int count_sheep(vector<bool> arr) 
{
  auto sheepCounter = 0;
  
  for(auto x : arr)
  {
    if(x == true)
    {
      sheepCounter++;
    }
  }
  
  return sheepCounter;
}
