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
int arr2[101][101];

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
   int n,x;
    test{
        map<int,int>mp1,mp2;
        cin>>n;
        loop(i,n){
          cin>>x;
          if(x == 1){
              if(mp1[1]>mp1[2])
                  mp2[1]++;
              else mp1[1]++;
          }
          else if(x == 2){
              if(mp1[2]<mp1[1])
                  mp1[2]++;
              else mp2[2]++;
          }
          else{
              if(mp1[1]>= mp1[2])mp1[1]++;
              else if(mp2[1]>= mp2[2])mp2[1]++;
              else {
                  if(mp1[2]<mp1[1])mp1[2]++;
                  else mp2[2]++;
              }
          }
        }
        cout<<mp1[1]+mp2[1]<<"\n";
    };
    return 0;
}
