/*

Sample Input :
12345
Sample Output :
15

*/



int sumOfDigits(int n) 
{
  
  if(n == 0)
    {
        return 0;
    }
  int ans=sumOfDigits(n/10);
  int a=ans+(n%10);
  return a;
}



