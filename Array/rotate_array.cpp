#include<bits/stdc++.h>
using namespace std;


int Leftrotate(int arr[], int low , int high){
  //*Optimal Approach Time Complexity O(N);  Space Complexity in whole O(N); Extra Space using is O(1)
  int i=low;
  while(i<high){
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    i++;
  }
  
return 0;
}



int KLeftrotate(int arr[], int low , int high, int places){
  //*Brute Approach Time Complexity O(N * kplaces);  Space Complexity in whole O(N); Extra Space using is O(1)
   
   int n = high - low + 1;
    places = places % n;

    for(int count = 0; count < places; count++) {

        int i = low;

        while(i < high) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i++;
        }

    }

    // *Optimal Approach Time Complexity O(N);  Space Complexity in whole O(N); Extra Space using is O(1)
    // int n = high - low + 1;
    // places = places % n;     

    // reverse the first 'places' elements
   // *   reverse(arr + low, arr + low + places);
    //     reverse the remaining 'n-places' elements
    // *    reverse(arr + low + places, arr + high + 1);
    //     reverse the whole array
    //  *   reverse(arr + low, arr + high + 1);  



  
  return 0;
}


int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n; i++) cin>>arr[i];

  KLeftrotate(arr, 0, n-1,3);

  for(int i=0; i<n; i++) cout<<arr[i]<<" ";

  return 0;
}