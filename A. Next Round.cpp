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

template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}

bool is_prime_helper( size_t target, size_t check )
{
    return (check*check > target) || ((target%(check+1) != 0)&&
    (target%(check+5) != 0) && is_prime_helper( target, check+6 ));
}
bool tui_prime_naki(size_t target )
{
    return (target != 0) && (target !=1) && ((target == 2 || target == 3 || target == 5 )||
    ((target%2 != 0) && (target%3 != 0) && (target%5)!=0 && is_prime_helper( target, 6 )));
}




using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n, aksueguasf=0;
    cin >> m >> n;
    int a[m];
    f0(i,m)
    {
        cin >> a[i];
    }
    f0(j,m)
    {
        if(a[j]>=a[n-1]&&a[j]>0)
        {
            aksueguasf++;
        }
    }
    cout << aksueguasf << endl;
    return 0;
}


