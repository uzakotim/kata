// Function
// Develop your function here
/* ----------------------------------------------------- */
std::vector<std::string> permuted= {};
void permute(std::string& a, int l, int r)
{
    // Base case
    if (l == r)
        // std::cout << a << std::endl;
        permuted.push_back(a);
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

std::vector<std::string> permutations(std::string s) {
    // Your code here
    int n = s.size();
    permuted = {};
    if (s.size() == 0)
        return {""};
    // Function call
    permute(s, 0, n - 1);
    //remove duplicates in permuted
    std::sort(permuted.begin(), permuted.end());
    permuted.erase(std::unique(permuted.begin(), permuted.end()), permuted.end());
    for (auto i : permuted)
    {
        std::cout << i << std::endl;
    }
    return permuted;
}