#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b; cin>>a>>b;
	cout<<(((a&b)|(a+1))^(a+4)) <<endl;
}
