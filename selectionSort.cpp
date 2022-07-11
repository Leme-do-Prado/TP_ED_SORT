#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) 
{ 
    int i, j, minimum, aux; 
  
    for (i = 0; i < n-1; i++) 
    { 
        
        minimum = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[minimum]) 
            minimum = j; 
   
		    aux = arr[minimum];
		    arr[minimum] = arr[i];
		    arr[i] = aux;
    } 
} 
  
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
int main() 
{ 
    int arr[] = {33, 33, 4, 10, 26, 35, 44}; 
    selectionSort(arr, 7); 
    printArray(arr, 7); 
    return 0; 
} 
