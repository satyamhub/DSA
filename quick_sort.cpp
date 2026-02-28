#include<bits/stdc++.h>

using namespace std;


/*
* Space Complexity of Quick Sort is O(log N) in best case and O(N) in worst case.
* The best case occurs when the pivot divides the array into two equal halves, leading to a logarithmic depth of recursion. The worst case occurs when the pivot is consistently the smallest or largest element, leading to a linear depth of recursion. 
* The average case time complexity of Quick Sort is O(N log N), which occurs when the pivot is reasonably well-chosen, leading to balanced partitions of the array.
* Quick Sort is an in-place sorting algorithm, meaning it does not require additional space for another array. However, it does use space for the recursive call stack, which can grow up to O(log N) in the best case and O(N) in the worst case, depending on the choice of pivot and the structure of the input array.
*The choice of pivot can significantly affect the performance of Quick Sort. Common strategies for selecting a pivot include choosing the first element, the last element, the middle element, or using a random element. The median-of-three method, which selects the median of the first, middle, and last elements as the pivot, can help improve performance by reducing the likelihood of encountering worst-case scenarios.
*time complexity of quick sort is O(N log N) in average and best case, and O(N square) in worst case.



*/ 

int partition(int arr[], int low, int high){
      int pivot=arr[low];   //*here first element of array as pivot
      int i=low;
      int j=high;

      while(i<j){
        while(arr[i]<=pivot && i<=high-1){
             i++;
        }
        while (arr[j]>pivot && j>=low+1){
             j--; 
        
        }
        
        if(i<j){
          swap(arr[i],arr[j]);
        }
        
      }

swap(arr[low],arr[j]);
        return j;

}


void qs(int arr[], int low, int high){
    if(low<high){
      int pIndex=partition(arr,low,high);    
      qs(arr,low,pIndex-1);
      qs(arr,pIndex+1,high);
    }
}







int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    qs(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}   