/*

Sample Input :
2
Sample Output :
a b
a c
b c

*/


void towerOfHanoi(int n, char source, char auxiliary, char destination) {

if(n==0)
{
  return;
}
	towerOfHanoi(n-1,source,destination,auxiliary);
        cout<<source<<" "<<destination<<endl;
	towerOfHanoi(n-1,auxiliary,source,destination);
  return;
}

