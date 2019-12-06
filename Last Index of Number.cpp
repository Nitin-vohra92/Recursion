/*

Sample Input :
4
9 8 10 8
8
Sample Output :
3

*/


int lastIndex(int input[], int size, int x) 
{

if(size==0)
  {
    return -1;
  }
if(x==input[size-1])
   return size-1;
   
lastIndex(input,size-1,x);

}
