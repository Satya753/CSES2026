#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fi first
#define se second
#define INF 100000000000000000LL
#define ll  long long int
#define lld long double
#define ull unsigned long long
const ll inf =1e9+44;
const int MAX=3e5+9;
const ll MOD= 1e9+7;
const double eps=1e-10;
double const PI=3.1415926535897931;


using namespace std;
// For debugging 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _printdebug(x); cerr << endl;
#else
#define debug(x)
#endif

void _printdebug(ll t) {cerr << t;}
void _printdebug(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _printdebug(char t) {cerr << t;}
void _printdebug(double t) {cerr << t;}
void _printdebug(ull t) {cerr << t;}

template <class T, class V> void _printdebug(pair <T, V> p);
template <class T> void _printdebug(vector <T> v);
template <class T> void _printdebug(set <T> v);
template <class T, class V> void _printdebug(map <T, V> v);
template <class T> void _printdebug(multiset <T> v);
template <class T, class V> void _printdebug(pair <T, V> p) {cerr << "{"; _printdebug(p.first); cerr << ","; _printdebug(p.second); cerr << "}";}
template <class T> void _printdebug(vector <T> v) {cerr << "[ "; for (T i : v) {_printdebug(i); cerr << " ";} cerr << "]";}
template <class T> void _printdebug(set <T> v) {cerr << "[ "; for (T i : v) {_printdebug(i); cerr << " ";} cerr << "]";}
template <class T> void _printdebug(multiset <T> v) {cerr << "[ "; for (T i : v) {_printdebug(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _printdebug(map <T, V> v) {cerr << "[ "; for (auto i : v) {_printdebug(i); cerr << " ";} cerr << "]";}

 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

void solve(){
    int n;
    cin >> n;
    set < int > st;
    for (int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        st.insert(a);
    }
    cout << (int)(st.size());
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    freopen("Error.txt" , "w" , stderr);
#endif
    int test;
    test = 1;
    while(test--){
        solve();
    }

}

