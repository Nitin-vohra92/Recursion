/*

Sample Input:
abb
Sample Output:
true

*/

bool help(char input[])
{
  if(input[0]==0)
    return true;

if(input[0]=='b')
{
  if(input[1]=='b')
  {
    bool b=help(input+2);
    if(b==1)
      return true;
    else
    {
      return false;
    }
  }
  else{
    return false;
  }
}
if(input[0]=='a')
{
  bool b=help(input+1);
  if(b==1)
  return true;
  else
    return false;
}

}



bool checkAB(char input[]) {
	
if(input[0]=='a')
{
 bool a=help(input+1);
   if(a==1)
     return true;
  else
    return false;
}
  else{
    return false;
  }
}



