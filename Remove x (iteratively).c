/*

Sample Input 1 :
xaxb
Sample Output 1:
ab


*/

// Change in the given string itself

void removeX(char input[]) {
    
int i;
  if(input[0] == 'x')
  {
    for( i=0; input[i]!=0; i++)
    {
      input[i]=input[i+1];
    }
  }
  return;
}
