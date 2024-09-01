/* You are given a number of stairs initially you are at 0th stair and u should reach to 
Nth stair each time u can climb one step or 2 steps.
Return number of distinct ways u can climb from 0th step to Nth step
*/
#include<iostream>
using namespace std;
int climbStair(int n){
    if(n<0) return 0; //0 means no way to move
    else if(n==0) return 1; //We have 1 way 
    else return climbStair(n-1)+climbStair(n-2); //We can move 2 steps or 1 at a time 

}
int main(){
    int n;
    cout<<"n: "<<endl;
    cin>>n;
    cout<<"No of ways are "<<climbStair(n);
    return 0;
}
//We can also solve this using dynamic programming
//TC and SC