/*
Sample Input :
3 
5
Sample Output -
15
*/

int multiplyNumbers(int m, int n) {

//BASE CASE

if(n==1)
{
  return m;
}

//RECURSIVE + SMALL CALCULATION

  int ans=multiplyNumbers(m,n-1)+m;
  return ans;
}


