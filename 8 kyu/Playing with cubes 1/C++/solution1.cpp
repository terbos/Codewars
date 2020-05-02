#include <iostream>
using namespace std;

class Cube
{
public:
  Cube() { Side = 0; }
  Cube(int side):
  Side(side)
  {}
  ~Cube() {}
  
  int GetSide() { return Side;}
  void SetSide(int num) { Side = num; }
  
private:
  int Side;
};
