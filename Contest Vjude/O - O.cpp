#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
const int N=1e5+7;
int nums[N];
 
#define cn(n)           int n;cin>>n;
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define pi              M_PI 
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
 
int main()
{
    Alauddin
    cn(n);
    // int num_bits = sizeof(n) * 8;
    // bitset<32> binary(n);
    // cout << binary.to_string().substr(binary.to_string().find('1')) <<endl;
    if (n == 0) {
        cout << "32" <<endl;
        return 0;
    }
    int cnt = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}