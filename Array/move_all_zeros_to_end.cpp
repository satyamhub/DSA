#include<bits/stdc++.h>
using namespace std;  

void mvzeros_brute1(int arr[],int low, int high){
  //*Wrong Approach bcz It will not move if there is consecutive zero. 
  int pointer=low;
   while(pointer<high){
    if(arr[pointer]==0 && arr[pointer+1]!=0){
       int temp=arr[pointer];
       arr[pointer]=arr[pointer+1];
       arr[pointer+1]=temp;

    }
    pointer++;

   }

}


void mvzeros_brute2(int arr[], int low, int high){
  //*time complexity O(N square)

    for(int i = low; i < high; i++){
        int pointer = low;

        while(pointer < high){
            if(arr[pointer] == 0 && arr[pointer+1] != 0){
                int temp = arr[pointer];
                arr[pointer] = arr[pointer+1];
                arr[pointer+1] = temp;
            }
            pointer++;
        }
    }

}

void moveZeroes3(int arr[], int n){
//   *Time: O(N)
//* Space: O(1)

    int j = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1) return;

    for(int i = j + 1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

void moveZeroes4(int arr[], int n){
    int j = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}


int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n; i++) cin>>arr[i];

  moveZeroes4(arr, n);

  for(int i=0; i<n; i++) cout<<arr[i]<<" ";

  return 0;
}