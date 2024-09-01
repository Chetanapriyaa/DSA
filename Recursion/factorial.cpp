//Recursion is nothing but a function calling it self
//The condn at which we stop rec is called base condition
//Factorial of a number 
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0||n==1) return 1;
    return fact(n-1)*n;
}
int main(){
    int n;
    cout<<"n: "<<endl;
    cin>>n;
    cout<<"Fact of "<<n<<" "<<fact(n);
    return 0;
}
//Time complexity :     Space complexity: 