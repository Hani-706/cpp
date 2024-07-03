#include<iostream>
using namespace std;
void countsort(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }
    int count[k+1]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    int output[n]={0};
    for(int i=n-1;i>=0;i--){
      output[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[]={1,3,2,3,4,1,6,4,3};
    countsort(arr,9);
    
}