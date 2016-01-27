/*pranay decided to put up a stall on the eve of Saturnalia where he could sell orange juice and earn money. Pranay has N glasses A1,A2,...,An with each glass having different amounts of juice.He decided to make volume of juice in all glasses equal.
Pranay can perform two operations for this :
1) Double the volume of glass.
2) Half the volume of glass (integer division).
Assuming infinite supply of juice, what are the minimum number of operations required to make volume of all glasses equal.*/
#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <queue>
#include <typeinfo>
#include <fstream>
#include <map>
#include <stack>
typedef long long ll;
using namespace std;
//freopen("D.in","r",stdin);
//freopen("D.out","w",stdout);
#define sspeed ios_base::sync_with_stdio(0);cin.tie(0)
#define test freopen("test.txt","r",stdin)  
#define maxn 2000001
#define mod 10007
#define eps 1e-9
const int inf=0x3f3f3f3f;
const ll infll = 0x3f3f3f3f3f3f3f3fLL;
inline ll read()
{
    ll x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
//**************************************************************************************


int cnt[maxn],num[maxn];
int a[maxn];
int main()
{
    int n=read();
    for(int i=0;i<n;i++)
    {
        int x=read();
        int pre=0;
        while(x)
        {
            int s=0;
            while(x%2==0)
            {
                x/=2;
                s++;
            }
            int y=x;
            int j=0;
            while(y<maxn)
            {
                cnt[y]++;
                num[y]+=pre+abs(j-s);
                j++;
                y*=2;
            }
            pre+=s+1;
            x/=2;
        }
    }
    int ans=inf;
    for(int i=1;i<maxn;i++)
    {
        if(cnt[i]==n)
            ans=min(ans,num[i]);
    }
    cout<<ans<<endl;}
