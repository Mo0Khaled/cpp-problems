#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
#define all(v) v.begin(),v.end()
#define loop(i, n) for (ll (i) = 0; (i)<(n); (i)++)

void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

const int N = 1e6 + 7;
int mod = 1e9;
int arr[N];
int arr2[101][101];

int main() {
    init();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        loop(i,n)cin>>arr[i];
        loop(i,n){
            int cnt = 0;
            loop(j,n){
                if(arr[i] == arr[j])cnt++;
            }
            if(cnt == 1)cout<<i+1<<"\n";
        }
    }

    return 0;
}