/*

Sample Input:
6 
2 6 8 5 4 3

Sample Output:
2 3 4 5 6 8  
 
*/
 
 
 
 
 void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
 {
 int i=0,j=0,k=0;
  
  while(i<size1 && j<size2)
  {
    // comparison
    if(arr1[i] < arr2[j])
      ans[k++] = arr1[i++];
    else
      ans[k++]= arr2[j++];
  }
   
  while(i< size1)
    ans[k++] = arr1[i++];
  
  while(j< size2)
    ans[k++]=arr2[j++];
  
  }
  
void mergeSort(int input[], int size)
{
  if(size==1)
    return;
  int a,b,i;
  if(size%2==0)
  {
     a=size/2;
     b=size/2;
  }
  else
  {
    a=size/2;
    b=(size/2)+1;
  }
  int half1[500];
  int half2[500];
  for(i=0;i<a;i++)
  {
    half1[i]=input[i];
  }
  for(int j=0;j<b;j++)
  {
    half2[j]=input[i];
    i++;
  }
  mergeSort(half1,a);
  mergeSort(half2,b);
  
  merge(half1,a,half2,b,input);
}
