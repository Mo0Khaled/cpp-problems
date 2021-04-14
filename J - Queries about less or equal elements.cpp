#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
#define all(v) v.begin(),v.end()
#define loop(i, n) for (ll (i) = 0; (i)<(n); (i)++)
#define test int t; cin>> t; while(t--)
const int N = 1e6 + 7;
int mod = 1e9;
int arr[N];
int arr1[N];
int arr2[501][501];

void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    init();
    int n,m,x;
    cin>>n>>m;
    vi v(n);
    loop(i,n)cin>>v[i];
    sort(v.begin(),v.end());
    loop(i,m){
        cin>>x;
        auto index = upper_bound(v.begin(),v.end(),x);
        if(x == *index)cout<<index-v.begin()+1<<" ";
        else cout<<index-v.begin()<<" ";
    }
    return 0;
}
