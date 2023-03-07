// Function
// Develop your function here
/* ----------------------------------------------------- */
std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2){
  //merge all elements of array2 into a string
  std::string str = "";
  for (size_t i = 0; i < array2.size(); i++){
    str += array2[i];
  }
  std::vector<std::string> valid_strings = {};
  for (auto x: array1)
  {
    if (str.find(x) != std::string::npos)
    {
      valid_strings.push_back(x);
    }
  }
  //sort the array
  std::sort(valid_strings.begin(), valid_strings.end());
  return valid_strings;
}
/* ----------------------------------------------------- */