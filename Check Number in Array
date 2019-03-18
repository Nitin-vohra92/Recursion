/*

Sample Input :
3
9 8 10
8
Sample Output :
true

*/




bool checkNumber(int input[], int size, int x)
{
 
  if(size==1)
  {
    return false;
  }
  if(x==input[size-1])
    return true;
  
  bool ans= checkNumber(input,size-1,x);
  
  return ans;
}
