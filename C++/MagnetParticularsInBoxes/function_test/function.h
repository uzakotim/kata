// Function
// Develop your function here
/* ----------------------------------------------------- */
long double calculate_magnets(int k,int n)
{
    long double sum = 0.0L;
    for (int i=1;i<=k;i++)
    {
        std::cout<<"break\n";
        for (int j=1;j<=n;j++)
        {
            long double total_prod = 1.0L;
        
            for (int p=1;p<=2*i;p++)
            {
                total_prod *= (j+1);
                total_prod /= 10L;
                
            }
            std::cout << (total_prod) << std::endl;
            
            sum += std::round((std::round(1.0L*std::pow(10,16)/(i*std::pow(10L,2*i)*total_prod))/std::pow(10,8))*std::pow(10,8))/std::pow(10,16);
            std::cout << sum << std::endl;
        }
    }
    // std::cout << 1.0L/101 <<'\n';

    std::cout << sum <<std::endl;
    return sum;
    
}
/* ----------------------------------------------------- */