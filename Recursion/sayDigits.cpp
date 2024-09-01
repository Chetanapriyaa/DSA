#include<iostream>
using namespace std;
void sayDigit(int n,string arr[]){
    //base case
    if(n==0) return;
    //logic
    int digit = n%10;
    n = n/10;
    //Recursive call
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","Eight",
    "nine"};
    int n;
    cout<<"n: "<<endl;
    cin>>n;
    sayDigit(n,arr);
    return 0;
}
//Time complexity :     Space complexity: 