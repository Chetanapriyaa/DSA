// Sum of all elements in the array using recursion
#include<iostream>
using namespace std;
int sum(int arr[],int size){
    //Base condition
    if(size==0) return 0;
    if(size==1) return arr[0];
    int remainingPart = sum(arr+1,size-1);
    int sum = arr[0]+remainingPart;
    return sum;
}
int main(){
    int arr[5] = {2,4,6,8,10};
    int size = 5;
    cout<<"Sum of elements in array is "<<sum(arr,size)<<endl;
    return 0;
}