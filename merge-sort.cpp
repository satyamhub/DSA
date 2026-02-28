#include <bits/stdc++.h>
using namespace std;


void merge(int arr[],int low , int mid, int high){
  int temp[high-low+1];
  int left=low;
  int right=mid+1;
  int k=0;

  while(left<=mid && right<=high){
    if(arr[left]<=arr[right]) {
      temp[k++] = arr[left++];
    }else{
      temp[k++] = arr[right++];

    }
  }
  while(left<=mid){
   temp[k++] = arr[left++];
  }
  while (right<=high){
   temp[k++] = arr[right++];
  }

   for(int i = 0; i < k; i++) {
        arr[low + i] = temp[i];
    }
  

}

 

void mS(int arr[], int low, int high){
    if(low>=high) return;  //No Single Element Left
    int mid=(low+high)/2;  //split middle
    mS(arr,low,mid);       //sort start to mid
    mS(arr,mid+1,high);    //sort mid+1 to start
    merge(arr,low,mid,high); //merge both
     
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    mS(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}               