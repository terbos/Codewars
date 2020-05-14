int past(int h, int m, int s) 
{
  const int millisecInSec = 1000;
  return ((h * 60 * 60 * millisecInSec) + (m * 60 * millisecInSec) + (s * millisecInSec));
}
