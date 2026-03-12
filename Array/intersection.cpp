#include<bits/stdc++.h>
using namespace std;
//*intersection of two Sorted Array  Time complexity: O(n + m).

vector <int>intersection(int arr1[],int n,int arr2[],int m){
  int i=0;
  int j=0;
  vector<int> intersectionArr;

  while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            intersectionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
 

 
  return intersectionArr;
  
}





int main(){
  //*first array
  int n;
  cin>>n;
  int arr1[n];
  for(int i=0; i<n;i++){
    cin>>arr1[i];
  }

  //*second array

  int m;
  cin>>m;
  int arr2[m];
  for(int i=0;i<m;i++){
    cin>>arr2[i];
  }

 vector<int> result = intersection(arr1, n, arr2, m);

    //* Print intersection array
    for(int x : result)
        cout << x << " ";

    return 0;

  

}