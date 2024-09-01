// Sum of all elements in the array using recursion
#include<iostream>
using namespace std;
bool Bsearch(int low,int high,int key,int arr[]){
    //base case for ele not found
    if(low>high) return false;
    int mid = (low+high)/2;
    //base case for element found
    if(arr[mid]==key) return true;
    else if (arr[mid]>key) return Bsearch(low,mid-1,key,arr);
    else return Bsearch(mid+1,high,key,arr);
}
int main(){
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 2;
    int low = 0;
    int high = size-1;
    bool ans = Bsearch(low,high,key,arr);
    if(ans){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}
//hw is solve 12-15 lectures of love babbar using recursion 