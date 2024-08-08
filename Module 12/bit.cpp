#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y; cin>>x>>y;
    int r = x | y; // OR
    int a = x & y; // AND
    int xorr = x ^ y; // XOR
    cout<<r<<" "<<a<<" "<<xorr<<endl;
    return 0;
}