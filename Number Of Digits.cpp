/*
Sample Input :
 156
Sample Output :
3
*/

int count(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int smallAns = count(n / 10);
    return smallAns+1;
}
