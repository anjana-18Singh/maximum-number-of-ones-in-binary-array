//count the maximum number of one in the binary std::array//
#include<iostream>
#include<vector>
using namespace std;


int maxcount(int arr[],int n){
    int cnt=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }else{
            cnt=0;
        }
        maxi=max(cnt,maxi);
        
    }
    return maxi;
}

int main(){
    int arr[]={1,0,0,0,1,1,1,0};
    int n=8;
    int ans=maxcount(arr,n);
    cout<<"the maximum number of 1 in the binary array: "<<ans;
}