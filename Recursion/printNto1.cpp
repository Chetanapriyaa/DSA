#include<iostream>
using namespace std;
void printcount(int n){
    if(n==0) return ;
    cout<<n;
    printcount(n-1);
}
int main(){
    int n;
    cout<<"n: "<<endl;
    cin>>n;
    printcount(n);
    return 0;
}
//Time complexity :     Space complexity: 