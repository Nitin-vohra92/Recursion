/*

Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false

*/

bool isPalindrome(char input[], int start, int end)
{
  if(start >= end)
    return true;

  if(input[start] == input[end])
  {
    bool ans = isPalindrome(input, start+1, end-1);
    if(ans == true)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  else
  {return false;}
  
}

bool checkPalindrome(char input[]) {
   
 int i=0,len=0;
  for(i=0; input[i]!=0; i++)
  {
    len++;
  }
 int start=0;
 int end=len-1;
  bool answer=isPalindrome(input,start,end);
  return answer;
}
