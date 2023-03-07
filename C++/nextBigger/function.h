// Function
// Develop your function here
/* ----------------------------------------------------- */
std::vector<std::string> permuted= {};
std::string n_str = "";
void permute(std::string& a, int l, int r)
{
    // Base case
    if (l == r)
        permuted.push_back(a);
        if (std::stol(a) > std::stol(n_str))
        {
            return;
        }
    else {
        // Permutations made
        for (int i = l; i <= r; i++) {
 
            // Swapping done
            std::swap(a[l], a[i]);
            // Recursion called
            permute(a, l + 1, r);
 
            // backtrack
            std::swap(a[l], a[i]);
        }
    }
}
long nextBigger(long n) {
    //convert n to string
    n_str = std::to_string(n);
    std::string a = std::to_string(n);
    //create array of elements of n_str
    std::vector<char> arr(n_str.begin(), n_str.end());
    int n_size = n_str.size();
    permuted = {};
    if (n_str.size() == 0)
        return -1;
    // Function call
    permute(a, 0, n_size - 1);
    long result = std::stol(permuted[permuted.size()-1]);
    if (result == n)
        return -1;
    else
        return result;


}
/* ----------------------------------------------------- */