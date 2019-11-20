/*

FUNCTION ONLY
Sample Input :
6
2 3 4 5 6 8 
5 
Sample Output:
3 

*/

int middle(int start,int end)
{
  int a=(start+end)/2;
  return a;
}

//MAIN BINARY SEARCH

int helper(int input[],int start,int end,int element)
{
  if(start>=end)
  {
    if(input[start]==element)
    return start;
    else
    return -1;
  }
  
  int mid=middle(start,end);
  
  if(input[mid]==element)
    return mid;
  else if(input[mid]<element)
  {
    start=mid+1;
    int d=helper(input,start,end,element);
    return d;
  }
  else if(input[mid]>element)
  {
    end=mid-1;
    int d=helper(input,start,end,element);
    return d;
  }
  
}
int binarySearch(int input[], int size, int element)
{
   
  int start=0;
  int end=size-1;
  int z=helper(input,start,end,element);
  return z;

}
