/*

Sample Input :
10204
Sample Output
2

*/

int countZeros(int n) {
    
    int ans=0;
  if(n==0)
  {
  return 0; 
  }
   ans=countZeros(n/10)+ans;
  if(n%10==0)
  {
    return ans+1;
  }
  else{
  return ans;
  }
 

 }
