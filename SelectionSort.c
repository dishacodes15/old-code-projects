#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void selectionSort(int arr[], int n)
{
int i, j, min_idx,temp;

for (i = 0; i<=n-2; i++)
{

min_idx = i;
for (j = i+1; j <=n-1; j++)
{
if (arr[j] <arr[min_idx])
min_idx = j;
}

temp=arr[i];
arr[i]=arr[min_idx];
arr[min_idx]=temp;
}
}
int main()
{
int n ;
printf("enter the value of n\n");
scanf("%d",&n);
int arr[n];
srand(time(NULL)); 

printf("Original Array: ");
for (int i = 0; i< n; i++)
{
arr[i] = rand() % 10000; 
printf("%d ", arr[i]);
}
printf("\n");

double start_time = clock();
selectionSort(arr, n);
double end_time = clock();
double total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

printf("Sorted Array: ");
for (int i = 0; i< n; i++)
{
printf("%d ", arr[i]);
}
printf("\n");
// Print time complexity
printf("Time Complexity: O(n^2)\n");
printf("Execution Time: %f seconds\n", total_time);
return 0;
}
