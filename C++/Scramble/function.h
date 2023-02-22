// Function
// Develop your function here
template <typename T>
bool IsSubset(std::vector<T> A, std::vector<T> B)
{
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());
    return std::includes(A.begin(), A.end(), B.begin(), B.end());
}
/* ----------------------------------------------------- */
bool scramble(const std::string& s1, const std::string& s2){
  //your code here
  //create array of s2 elements
  std::vector<char> s2_array(s2.begin(),s2.end());
  //create array of s1 elements
  std::vector<char> s1_array(s1.begin(),s1.end());

  return IsSubset(s1_array,s2_array);
}
/* ----------------------------------------------------- */