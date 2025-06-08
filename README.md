<<<<<<< HEAD
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
=======
# Learning-DSA-using-cpp
>>>>>>> 5976f5b12a873166a34147bb012d3743264728b0
