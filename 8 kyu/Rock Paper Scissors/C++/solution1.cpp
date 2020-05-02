#include <string>
using namespace std;

std::string rps(const std::string& p1, const std::string& p2)
{
    string result="";
    
    if(p1 == "rock")
    {
      if(p2=="rock")
        result = "Draw!";
      if(p2=="scissors")
        result = "Player 1 won!";
      if(p2=="paper")
        result = "Player 2 won!";
    }
    if(p1 == "scissors")
    {
      if(p2=="rock")
        result = "Player 2 won!";
      if(p2=="scissors")
        result = "Draw!";
      if(p2=="paper")
        result = "Player 1 won!";
    }
    if(p1 == "paper")
    {
      if(p2=="rock")
        result = "Player 1 won!";
      if(p2=="scissors")
        result = "Player 2 won!";
      if(p2=="paper")
        result = "Draw!";
    }
    

    return result;
}
