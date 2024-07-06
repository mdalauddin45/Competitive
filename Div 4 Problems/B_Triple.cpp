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
    w(t){
        cn(n);
        vi v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        map<int,int>val;
        bool found = false;
        for(int value:v){
            val[value]++;
            if (val[value] == 3 ) {
                cout << value << endl;
                found = true;
                break;
            }
        }
        if(!found)cout<<"-1"<<endl;
    }
    return 0;
}