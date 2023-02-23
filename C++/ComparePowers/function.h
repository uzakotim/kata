// Function
// Develop your function here
/* ----------------------------------------------------- */
int comparePowers(std::pair<long, long> n1, std::pair<long, long> n2){
  //your code here
  long p1 = n1.first;
  long p2 = n2.first;
  long q1 = n1.second;
  long q2 = n2.second;
  long total1  = q1*log(p1);
  long total2  = q2*log(p2);
  if (total1 > total2)
  {
    return -1;
  }
  if (total1 < total2)
  {
    return 1;
  }
  return 0;
}
/* ----------------------------------------------------- */