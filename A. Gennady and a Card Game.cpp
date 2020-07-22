#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <algorithm>

#define lli             long long int
#define ull             unsigned long long
#define ld              long double
#define f0(i,n)         for(int i=0;i<n;i++)
#define f1(i,n)         for(int i=1;i<=n;i++)
#define nl              "\n"
#define lg(r,n)         (int)(log2(n)/log2(r))
#define sf1(a)          scanf("%d",&a)
#define sfl(a)          scanf("%lld",&a)
#define sfc(a)          scanf("%c",&a)
#define sf2(a,b)        scanf("%d %d",&a,&b)
#define sf2l(a,b)       scanf("%lld %lld",&a,&b)
#define sf3(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sf3l(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define mx1             110
#define mx2             1010
#define mx3             10010
#define mx4             100010
#define mx5             1000010
#define mx6             10000010
#define PI              3.14159265358979323846
#define E               2.71828182845904523536
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int nai = 0;
    int ache = 0;
    string s1;
    string s2;
    cin >> s1;
    while(cin >> s2)
    {
        if(s1[0]==s2[0] || s1[1]==s2[1])
        {
            ache++;
        }
        else
        {
            nai++;
        }
        if(ache+nai == 5) break;

    }
    if(ache > 0)cout << "YES" << endl;
    else if(nai > 0) cout << "NO" << endl;
    return 0;
}
