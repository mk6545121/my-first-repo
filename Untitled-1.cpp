//first dsa solution using cpp
#include <bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if (i<0){
        return;
    }
    cout <<i <<endl;
    print(i-1,n);

}
int main(){
    int n;
    cin >>n;
    print(n,n);
    return 0;

}