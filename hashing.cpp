#include<bits/stdc++.h>
using namespace std;


int numberHashing(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Precompute
   // int hash[13]={0}; //use global array for more than 1e6(10 power 6)
   map <int, int> mpp; //because if we give 14 in array it will not run in hash[13]
   //Can Use unordered_map for better time complexity.
   //in unordered_map : time complexity :: best case O(1); worst case O(n) 
   
   for(int i=0; i<n; i++){
        mpp[arr[i]]+=1;
    }

    //iterate mpp
    // for(auto it:mpp){
    //     cout<<it.first<<">>-"<<it.second<<endl;
    // }
    
    int q;
    cin>>q;

    while (q--)
    {   
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;

    }
    return 0;
    


    
    
}




void charHashing(){
    string s;
    cin>>s;

    int hash[256]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;

    }

    int q;
    cin>>q;

    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }

}

int main(){
     
    numberHashing();
    //charHashing();


}