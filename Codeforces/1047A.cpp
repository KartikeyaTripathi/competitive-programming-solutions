#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"1 ";
    if((n-2)%3){
        cout<<"1 "<<n-2<<"\n";
    } else 
        cout<<"2 "<<n-3<<"\n";

    return 0;
}
