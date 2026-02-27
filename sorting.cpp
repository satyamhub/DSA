#include<bits/stdc++.h>

using namespace std;

void selection_sort(int arr[], int n){
    /*
    * Selection Sort
    * time Complexity: O(n square) in all cases as it always requires two nested loops to traverse the array.
    * space Complexity: O(1) as it is an in-place sorting algorithm.        
    
    */
    int isSwapped=0;
    for(int i=0; i<=n-2; i++){
       int mini=i;
       for(int j=i; j<=n-1; j++){
        if(arr[j]<arr[mini]){
            mini=j;
            isSwapped++;
        }
        
       }
       int temp=arr[mini];
       arr[mini]=arr[i];
       arr[i]=temp;
       

    }
    cout<<"No. of Swapping: "<<isSwapped<<endl;

}

/*
     * Bubble Sort
    * time Complexity: O(n square) in worst case and O(n) in best case when the array is already sorted.
    
     
*/           
void bubble_sort(int arr[], int n){
    int isSwapped=0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSwapped=isSwapped+1;
            }
        }
        cout<<"No. of Swapping: "<<isSwapped<<endl;
        if(isSwapped=0){
           break; 
        }
        
    }
    
}


void insertion_sort(int arr[], int n){

    /*
    * Time Complexity: O(n square) in worst case( 5 4 3 2 1) and avg case
      * and O(n) is best case: 1 2 3 4 5


     
    * Example: 12 11 23 4 1


     11 12 23 4 1
     11 12 4 23 1
     11 4  12 23 1
     4 11 12 23 1

     4 11 12 1 23
     4 11 1 12 23
     4 1 11 12 23
     1 4 11 12 23

     * no of swapping=8
    
    */
   int isSwaped=0;
    for(int i=0; i<=n-1; i++){
       
        int j=i;
        while(j>0 && arr[j-1]>arr[j] ) {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
                isSwaped++;
                
    }cout<<"No. of Swapping: "<<isSwaped<<endl;
    }
    
    
 
}






int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
   // selection_sort(arr, n);
   //bubble_sort(arr, n);
    insertion_sort(arr, n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}               