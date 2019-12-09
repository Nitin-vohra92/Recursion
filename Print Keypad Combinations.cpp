/*

Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf

*/

#include <string>
using namespace std;

string helper(int n)
{
  string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  return mapping[n];
}


void helper2(int number,string output="")
{
  //BASE CASE
  if(number==0)
  {  
  cout<<output<<endl;
  return;
  }

   int c=(number%10);
   
   if(c==0||c==1)
     return;
  
   string a=helper(c);
  
   for(int k=0;k<a.size();k++)
     {
  	string out1=a[k]+output;
  	helper2(number/10,out1);
      }
}

void printKeypad(int number) 
{
  helper2(number);
}



