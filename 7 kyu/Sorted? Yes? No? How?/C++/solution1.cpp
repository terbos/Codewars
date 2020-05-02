std::string is_sorted_and_how(std::vector<int> array)
{
    std::string isSorted;
    
    if(is_sorted(array.begin(), array.end()))
      isSorted = "yes, ascending";
    else if(is_sorted(array.rbegin(), array.rend()))
      isSorted = "yes, descending";
    else
      isSorted = "no";

    return isSorted; 
}
