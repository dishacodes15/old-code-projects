#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

// Function to partition the array 
int partition(int a[], int low, int high) { 
    int pivot = a[low]; // Pivot element 
    int i = low,temp; // Index of smaller element 
    int j=high+1;// Index of largest element 
 
    while(i<=j) 
    { 
        do i++;while(pivot>=a[i]); 
        do j--;while(pivot<a[j]); 
        if(i<j)   
        { 
          temp=a[i]; 
          a[i]=a[j]; 
          a[j]=temp; 
         }         
    } 
     
    temp=a[low]; 
    a[low]=a[j]; 
    a[j]=temp; 
  
    return j; 
} 
 
// Function to perform Quick Sort 
void quickSort(int a[], int low, int high)  
{ 
 int k; 
 if(low>high) return; 
  
        // Partitioning index 
        k= partition(a, low, high); 
 
        // Separately sort elements after partition 
        quickSort(a, low, k - 1);// left part of pivot element 
        quickSort(a, k + 1, high); // right part of pivot element 
 } 

int main()  
{ 
    srand(time(0)); // Seed for random number generation 
 
    int n; 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
 
    int a[n]; 
    printf("Randomly generated array:\n"); 
    for (int i = 0; i < n; i++) { 
        a[i] = rand() % 1000; // Generating random numbers between 0 and 999 
        printf("%d ", a[i]); 
    } 
    a[n]=9999; 
    clock_t start=clock(); 
 
    quickSort(a, 0, n - 1); 
     
    clock_t end=clock(); 
 
    return 0; 
} 
printf("Total time taken to sort %d elememts is %lf\n",n,((double)(end-start)/CLOCKS_PER_SEC)); 
