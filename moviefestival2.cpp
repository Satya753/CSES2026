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

bool cmp(const pair<int,int>& p1, const pair<int,int>& p2) {
    if (p1.second == p2.second)
        return p1.first < p2.first;   // increasing order of second
    return p1.second < p2.second;         // increasing order of first
}
void solve(){
    int n , k;
    cin >> n >> k;
    vector < pair < int , int > > iv;
    for (int i = 0 ;i < n; i++){
        int a , b;
        cin >> a >> b;
        iv.push_back({a , b});
    }

    sort(iv.begin() , iv.end() , cmp);

    priority_queue < pair < int , int > , vector < pair < int , int > > , greater < pair < int , int > >  > pq;
    int cnt = 0;
    for (int i = 0 ;i < n; i++){
        while(pq.size() > 0 && pq.top().first <= iv[i].first)
            pq.pop();

        if (pq.size() < k){
            cnt = cnt + 1;
            pq.push({iv[i].second , i});
        }
    }
    cout << cnt << endl;
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

