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
bool is_candidate(const vector<vector<int>>& matrix, int i, int j) {
    int n = matrix.size();
    int m = matrix[0].size();
    int current_value = matrix[i][j];
    
    // Check top, bottom, left, right neighbors
    if (i > 0 && matrix[i-1][j] >= current_value) return false; // top neighbor
    if (i < n-1 && matrix[i+1][j] >= current_value) return false; // bottom neighbor
    if (j > 0 && matrix[i][j-1] >= current_value) return false; // left neighbor
    if (j < m-1 && matrix[i][j+1] >= current_value) return false; // right neighbor
    
    return true;
}

void stabilize_matrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    bool changed = true;
    
    while (changed) {
        changed = false;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (is_candidate(matrix, i, j)) {
                    matrix[i][j]--;
                    changed = true;
                }
            }
        }
    }
}
int main()
{
    Alauddin
    w(t){
        int n,m; cin>>n>>m;
        vector<vi> mat(n,vi(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> mat[i][j];
            }
        }
        stabilize_matrix(mat);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout<< mat[i][j]<<" ";
            }cout<<endl;
        }
    }
    return 0;
}