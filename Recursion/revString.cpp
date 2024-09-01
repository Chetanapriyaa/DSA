#include<iostream>
using namespace std;
void rev(int i,int j,string &s){ //Inorder to see the changes that are occurred due to the
    //base case                  // fnx we should use call by value
    if(i>j) return;
    swap(s[i],s[j]);
    i++;
    j--;
    rev(i,j,s);
}
int main(){
    string s = "chetana";
    rev(0,s.length()-1,s);
    cout<<s;
    return 0;
}
//hw is solve 12-15 lectures of love babbar using recursion 