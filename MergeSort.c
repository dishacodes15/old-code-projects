#include<stdio.h> 
#include<time.h> 
#include<stdlib.h> 
#define MAX 10000 
     
double tc; 
double start,end; 
void mergeSort(int arr[],int low,int mid,int high); 
void partition(int arr[],int low,int high); 
 
int main() 
{ 
  int a[MAX],i,n; 
  printf("Enter the total number of elements: "); 
  scanf("%d",&n);  
  printf("\nEnter the elements which to be sort: \n"); 
  for(i=0;i<n;i++) 
  {
    a[i]=rand()%1000; 
  } 
  start=clock(); 
  partition(a,0,n-1); 
  end=clock();
  df1=(end-start)/CLOCKS_PER_SEC;
  printf("WORST CASE TIME COMPLEXITY/ TIME TAKEN TO SORT AN UNSORTED ARRAY=%f",df1);
  start=clock(); 
  partition(a,0,n-1); 
  end=clock();
  df2=(end-start)/CLOCKS_PER_SEC;
  printf("BEST CASE TIME COMPLEXITY/ TIME TAKEN TO SORT A SORTED ARRAY=%f",df2);
  return 0; 
} 
void partition(int arr[],int low,int high) 
{ 
  int mid;   
  if(low<high) 
  { 
    mid=(low+high)/2; 
    partition(arr,low,mid); 
    partition(arr,mid+1,high); 
    mergeSort(arr,low,mid,high); 
   } 
} 
 void mergeSort(int arr[],int low,int mid,int high) 
{ 
  int i,m,k,l,temp[MAX]; 
  l=low; 
  i=low; 
  m=mid+1; 
  while((l<=mid)&&(m<=high)) 
  { 
    if(arr[l]<=arr[m]) 
    { 
      temp[i]=arr[l]; 
      l++; 
    } 
    else
    { 
      temp[i]=arr[m]; 
      m++; 
    } 
    i++; 
  } 
  if(l>mid) 
  { 
    for(k=m;k<=high;k++) 
    { 
      temp[i]=arr[k]; 
      i++; 
    }    
  } 
  else
  { 
    for(k=l;k<=mid;k++) 
    { 
      temp[i]=arr[k]; 
      i++; 
    } 
  } 
  for(k=low;k<=high;k++) 
  { 
    arr[k]=temp[k]; 
  } 
}
