/*

Sample Input :
4
9 8 10 8
8
Sample Output :
1

*/



int firstIndex(int input[], int size, int x) {

if(size==0)
  {
    return -1;
  }
   if(x==input[0])
    return 0 ;
int ans= firstIndex(input+1,size-1,x);
  if(ans==-1)
  {
    return -1;
  }
  else{
    return ans+1;
  }
}
