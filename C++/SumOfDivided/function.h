// Function
// Develop your function here
/* ----------------------------------------------------- */
std::string sumOfDivided(std::vector<int> &lst)
{
      // "(2 12)(3 27)(5 15)"
      //find max of lst
      int max = 0;
      for (size_t i = 0; i < lst.size(); i++)
      {
        if (std::abs(lst[i]) >= max)
        {
          max = std::abs(lst[i]);
        }
      }
      //find all prime numbers
      
      std::vector<int> primes = {};
      bool pno[max+1];
      memset(pno, true, sizeof(pno));
      for (int i = 2; i*i <= max; i++) {
        if (pno[i] == true) {
          for (int j = i*2; j <= max; j += i)
            pno[j] = false;
          }
      }
      for (int i = 2; i<=max; i++)
        if (pno[i])
          primes.push_back(i);
          
      std::string result = "";
      for (size_t k = 0; k < primes.size(); k++)
      {
        int sum = 0;
        int divisible = 0;
        for (size_t p = 0; p < lst.size(); p++)
        {
          if (lst[p] % primes[k] == 0)
          {
            divisible++;
            sum += lst[p]; 
          }
        }
        if (divisible > 0)
        {
          result +="(" +std::to_string(primes[k]) + " " + std::to_string(sum) + ")";
        }
      }  
      std::cout<<result<<std::endl;
      return result;
}
/* ----------------------------------------------------- */