/*

FUNCTION ONLY

Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion


Sample Input :
3
Sample Output :
1.875



*/



#include<math.h>
double geometricSum(int k)
{
// BASE CASE
 if(k==0)
 return 1.0;
 
 //RECURSIVE CALL
 double a=geometricSum(k-1);
 
 //SMALL CALCULATION
 double ans=a+1.0/(pow(2,k));

 return ans;

}


