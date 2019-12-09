/*

Sample Input 1:
4
Sample Output :
7

*/



int staircase(int n)
{ //order is important
  if(n==3)
  return 4;
  
  if(n==2)
  return 2;
  
  if(n==1)
  return 1;
  
  if(n==0)
  return 0;
  
  int a=staircase(n-1)+staircase(n-2)+staircase(n-3);
  
  return a;
}
