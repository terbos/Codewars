class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p);
};

int Arge::nbYear(int p0, double percent, int aug, int p)
{
  double perc = percent / 100;
  int yearsCounter = 0;
  while(p0 < p)
  {
    p0 = p0 + (p0 * perc) + aug;
    yearsCounter++;
  }
  
  return yearsCounter;
}
