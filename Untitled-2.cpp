#include <bits/stdc++.h>
using namespace std;
int countVar=0;
void print(string name,int n){
    if (countVar>=n){
        return;
    }
    cout<<name<<endl;
    countVar+=1;
    print(name,n);

}
int main(){
    cout<<"Enter your name and time you want to print your name: "<<endl;
    int n;
    string name;
    cout<<"Your name: "<<endl;
    cin>>name;
    cout<<"how many time: "<<endl;
    cin>>n;
    print(name,n);
    return 0;


}