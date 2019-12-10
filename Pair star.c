/*

Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
xxyy
Sample Output 2:
x*xy*y

*/

// Changing in the given string itself

#include<string.h>
void pairStar(char input[]) 
{

  int len=0,i;
  for( i=0;input[i]!=0;i++)
    len++;
  if(input[0]==0)
  return;
  
  pairStar(input+1);
  len=strlen(input);

  if(input[0]==input[1])
  {
    for( i=len;i>=1;i--)
    {
      input[i+1]=input[i];
    }
    input[1]='*';
  }
  
}
