/*
FUNCTION ONLY

Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4

*/




int allIndexes(int input[], int size, int x, int output[]) {
  //BASE CASE
  if(size==0)
    return 0;
  //RECURSIVE CALL
  int ans=allIndexes(input,size-1,x,output);
  //SMALL WORK
  if(input[size-1]==x)
  {
    output[ans]=size-1;
    return (ans+1);
  }
 else
   return ans;
 
}
