#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int target=7;
    int idx=-1;
    while(lo<=hi){
        int mid =lo+(hi-lo)/2;
        if(target==arr[mid]){
            idx=mid;
            break;
        }
        else if(target<arr[mid]) hi=mid-1;
        else lo=mid+1;
    }
    if(idx==-1) cout<<"not found!";
    else cout<<"found at index "<<idx;
}