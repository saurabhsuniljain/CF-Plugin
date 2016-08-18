//-----------------------------These have the most common used functions -------------------------------------------------//

//-----------------starter header -----------------------//
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iterator>
#include <memory.h>
#include <complex>
#include <valarray>
#include <cassert>

using namespace std;

#define vi vector<int>
#define vc vector<char>
#define vvi vector< vector<int> >
#define REP(i,a) for(int i=0;i<a;i++)
#define REPA(i,a,b) for(int i=a;i<=b;i++)
#define EACH(i,c) for(__typeof((c).begin) i=c.begin();i!=c.end();i++)
#define RESET2D(x,r,c,v) REP(a,r)  REP(b,c)  x[a][b] = v
#define ALL(x) x.begin(),x.end()
#define SI(n) scanf("%d", &n)
#define SII(a,b) scanf("%d%d", &a, &b)
#define SIII(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define SL(a) scanf("%lld", &a);
#define SF(n) scanf("%f", &n)
#define SC(n) scanf(" %c", &n)
#define SS(n) scanf("%s", n)
#define PFA(n) printf("%d\n", n)
#define PF printf
#define pb push_back
#define mp make_pair
#define gc getchar_unlocked
#define F first
#define S second
#define TT int t;SI(t);while(t--)
#define endl '\n'
typedef long long LL;

#ifdef DBG
	#define DEBUG(X) cerr << ">>> DEBUG(" << __LINE__ << ") " << #X << " = " << X << endl
#else
	#define DEBUG(X) (void)0
#endif

void solve(){

}

int main(){
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}