#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl "\n"
#define gc getchar_unlocked
#define FOR(a, b) for(ll i = (a); i < (b); ++i)
#define EACH(x, a) for(auto &x : a)
#define deb(x)  cout << #x << " : " << x << "\n"
#define	deb1(x, y)  cout << #x << " : " << x << " " << #y << " " << y << "\n"
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define INF 1000000007
#define PI 3.1415926535897932384626

template <typename T = ll> vector <T> read(int size = 0, istream &in_stream = std :: cin){if(!size) in_stream >> size; vector <T> a(size); for(auto &x:a)in_stream >> x; return a;}


mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
		return uid(rang);
}

bool isupper(char x){
	return (x >= 'A' && x <= 'Z');
}

ll mpow(ll a, ll b){
	ll res = 1;
	a %= MOD;
	while(b){
		if(b & 1)
			res = res * a % MOD;
		a = a * a % MOD;
		b >>= 1;
	}
	return res;
}

ll nc2(ll x){
	if(x >= 2)
		return (x * (x - 1)) >> 1;
	return 0;
}

ll nc3(ll x){
	return (nc2(x) * (x - 2)) / 3;
}

bool is_palindrome(string a){
	string b = a;
	reverse(all(a));
	return a == b;
}

bool checkpow2(ll x){
	return x && (!(x & (x - 1)));
}

char tolow(char x){
	return x + 32;
}

char toup(char x){
	return x - 32;
}

void prefill(ll a[], ll n, ll val){
	FOR(0, n){
		a[i] = val;
	}
}

bool isprime(ll x){
	if(x == 1)
		return 0;
	if(x == 2)
		return 1;
	for(ll i = 2; i * i <= x; ++i){
		if(x % i == 0)
			return 0;
	}
	return 1;
}

const ll Mxn = 1e6 + 10;
vector <ll> adj[Mxn];
ll dist[Mxn], vis[Mxn], n, m;


void solve(){
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	precomp();
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	auto clk1 = clock();
	int t = 1;
	//cin >> t;
	while(t--)
		solve();
	auto clk2 = clock();
	cerr << "Time taken : " << (double)(1.0 * clk2 - clk1) / CLOCKS_PER_SEC << endl;
	return 0;
}
