char getGrade(int a, int b, int c) 
{
  auto result = (a + b + c) / 3;
  
  if(result >= 90) return 'A';
  if(result >= 80 && result < 90) return 'B';
  if(result >= 70 && result < 80) return 'C';
  if(result >= 60 && result < 70) return 'D';
  if(result >= 0 && result < 60) return 'F';
}
