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
    int arr[n];
    for(int i = 0; i<n;i++) cin>>arr[i];
    int s;cin>>s;
    int narry[n+1];
    narry[0]=s;
    for(int i=0;i<n;i++){
      narry[i+1]=arr[i];
    }
    for(int i = 0; i<n+1;i++) cout<<narry[i]<<" ";
    
    return 0;
}