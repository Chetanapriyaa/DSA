/*
#include<iostream>
using namespace std;
int pow(int a,int b){
    //base case - any num pow 0 is 1
    if(b==0) return 1;
    if(b==1) return a;
    return a*pow(a,b-1);
}
int main(){
   int a = 2,b=10;
   cout<<pow(a,b);
    return 0;
} */
//Optimised way check the pow is even or odd
#include<iostream>
using namespace std;
int pow(int a,int b){
    //base case - any num pow 0 is 1
    if(b==0) return 1;
    if(b==1) return a;
    int ans = pow(a,b/2);
}
int main(){
   int a = 2,b=10;
   cout<<pow(a,b);
    return 0;
}