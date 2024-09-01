// Sum of all elements in the array using recursion
#include<iostream>
using namespace std;
bool Lsearch(int arr[],int size,int key){
    if(size==0) return false;
    if(arr[0]==key) return true;
    else{
        bool remainingPart=Lsearch(arr+1,size-1,key);
        return remainingPart;
    }
}
int main(){
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 9;
    bool ans = Lsearch(arr,size,key);
    if(ans){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}