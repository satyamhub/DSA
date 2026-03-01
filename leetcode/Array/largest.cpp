#include<bits/stdc++.h>
using namespace std;



void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int largest(int arr[], int low , int high){
   int pivot = arr[low];
   int i=low;
   int j=high;

   while(i<=j){
    if(arr[i]>=pivot){
         pivot=arr[i];
    }
    i++;
   }
   cout<<pivot;
   return pivot;
}


int secLargest(int arr[], int low, int high){

    if(high - low + 1 < 2) return -1;

    int largest = arr[low];
    int secL = INT_MIN;

    int i = low + 1;
    while(i <= high){
        if(arr[i] > largest){
            secL = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secL){
            secL = arr[i];
        }
        i++;
    }

    if(secL == INT_MIN) return -1;

    return secL;
}


bool sorted(int arr[], int low, int high){
  //*to check if an array is sorted
  //* My Approach
  
  // int i=low;
  // int cnt=0;
  // int check=INT_MIN;
  // while(i<=high){
  //   if(arr[i]>=check){
  //      check=arr[i];
  //      cnt=cnt+1;
  //   }
  //   i++;
  // }
  // if(cnt==(high-low+1)){
  //   return true;
  // }else{
  //   return false;
  // }


  for(int i = low; i < high; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }

    return true;

}




int removeDuplicates(int arr[],int low, int high){
  //*Count No. of unique elements in an array in sorted array
  //* And Remove duplicates
  int cnt=1;
  int i=low;
  int pointer=arr[low];
  while(i<=high){
       if(arr[i]!=pointer){
        arr[low+cnt]=arr[i];
        cnt++;
        pointer=arr[i];
       }

    i++;
  }
  return cnt;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i];

  //cout<<largest(arr,0,n-1); 
  //cout<<secLargest(arr,0,n-1); 
  //cout<<sorted(arr,0,n-1);
    removeDuplicates(arr,0,n-1);
    printArray(arr,n);
    return 0;
}   