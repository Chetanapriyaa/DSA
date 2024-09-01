//We can solve it using loops but here try it with recursion
#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    //base case
    //Arr is sorted if there is only 1 element or 0 element
    if(size==0||size==1) return true;
    if(arr[0]>arr[1]) return false;
    else{
        bool ans =  isSorted(arr+1,size-1);
        return ans;
    }
}
int main(){
    int arr[5] = {2,4,6,8,10};
    int size = 5;
    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"Array is sorted ";
    }
    else{
        cout<<"Unsorted array";
    }
    return 0;
}