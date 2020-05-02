std::string get_planet_name(int id)
{
  std::string planet = "";
  if(id == 1) planet  = "Mercury";
  if(id == 2) planet  = "Venus";
  if(id == 3) planet  = "Earth";
  if(id == 4) planet  = "Mars";
  if(id == 5) planet  = "Jupiter";
  if(id == 6) planet  = "Saturn";
  if(id == 7) planet  = "Uranus";
  if(id == 8) planet  = "Neptune";
  return planet;
}
