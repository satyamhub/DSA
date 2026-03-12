#include<bits/stdc++.h>
using namespace std;
//*Union of two Sorted Array  O(n + m)

vector <int>union1(int arr1[],int n,int arr2[],int m){
  int i=0;
  int j=0;
  vector<int> unionArr;
  while(i<n && j<m){
    if(arr1[i]<=arr2[j]){
      if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
        unionArr.push_back(arr1[i]);
      }
      i++;
    }else{
      if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
        unionArr.push_back(arr2[j]);
      }
      j++;

    }
  }

  while(j<m){
     if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
        unionArr.push_back(arr2[j]);
      }
      j++;

  }

  while(i<n){
     if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
        unionArr.push_back(arr1[i]);
      }
      i++;
  }
  return unionArr;
  
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

 vector<int> result = union1(arr1, n, arr2, m);

    //* Print union array
    for(int x : result)
        cout << x << " ";

    return 0;

  

}