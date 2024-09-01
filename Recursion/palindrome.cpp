#include<iostream>
using namespace std;
bool checkPal(int i,int j,string &s){
    if(i>=j) return false;
    if(s[i]!=s[j]) return false;
    else checkPal(i+1,j-1,s);
    return true;
}
int main(){
    string s = "madama";
    bool isPal = checkPal(0,s.length()-1,s);
    if(isPal){
        cout<<"Pal";
    }else{
        cout<<"Not pal";
    }
    return 0;
}