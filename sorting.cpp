#include<bits/stdc++.h>

using namespace std;

void selection_sort(int arr[], int n){
    /*
    * Selection Sort
    * time Complexity: O(n square) in all cases as it always requires two nested loops to traverse the array.
    * space Complexity: O(1) as it is an in-place sorting algorithm.        
    
    */
    for(int i=0; i<=n-2; i++){
       int mini=i;
       for(int j=i; j<=n-1; j++){
        if(arr[j]<arr[mini]){
            mini=j;
        }
        
       }
       int temp=arr[mini];
       arr[mini]=arr[i];
       arr[i]=temp;
       

    }

}

/*
     * Bubble Sort
    * time Complexity: O(n square) in worst case and O(n) in best case when the array is already sorted.
    * space Complexity: O(1) as it is an in-place sorting algorithm.
    * to optimize the bubble sort, we can add a flag to check if any swapping occurs in the inner loop. If no swapping occurs, it means the array is already sorted and we can break out of the loop early, reducing the time complexity to O(n) in the best case.
    * Here is the optimized version of bubble sort:
    * void optimized_bubble_sort(int arr[], int n){
    *    bool swapped;
    *   for(int i=0; i<n-1; i++){
    *    swapped=false;
    *   for(int j=0; j<n-1-i; j++){
    *   if(arr[j]>arr[j+1]){
    *      int temp=arr[j];
    *     arr[j]=arr[j+1];
    *    arr[j+1]=temp;
    *   swapped=true;
    *  }
    * }
    *  if(!swapped){
    *   break;
    * }
    * 
     
*/           
void bubble_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    bubble_sort(arr, n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}               