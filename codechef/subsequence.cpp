#include <bits/stdc++.h>
using namespace std;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define inputN(i,a)               for(int i=0;i<a.size();i++) scanf("%d",&a[i])
#define all(a)                      a.begin(), a.end()
#define WHILE(n)               while(n--)
#define INF                         (int)1e9
#define pb                          push_back
#define minimum(a)               *min_element(a.begin(), a.end())
#define maximum(a)               *max_element(a.begin(), a.end())
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }

void find_lis(vector<int> &a, vector<int> &b)
{
   vector<int> p(a.size());
   int u, v;
 
   if (a.empty()) return;
 
   b.push_back(0);
 
   for (size_t i = 1; i < a.size(); i++) 
        {
      if (a[b.back()] < a[i]) 
                {
         p[i] = b.back();
         b.push_back(i);
         continue;
      }
      for (u = 0, v = b.size()-1; u < v;) 
                {
         int c = (u + v) / 2;
         if (a[b[c]] < a[i]) u=c+1; else v=c;
      }
      if (a[i] < a[b[u]]) 
                {
         if (u > 0) p[i] = b[u-1];
         b[u] = i;
      }  
   }
 
   for (u = b.size(), v = b.back(); u--; v = p[v]) b[u] = v;
}
 
int main(int argc, char const *argv[])
{
   int n,t;
   s(n);s(t);
   std::vector<int> v(n),ans;
   forall(i,0,n){
      s(v[i]);
   }
   forall(i,0,t-1){
      forall(j,0,n)
      {
         v.pb(v[j]);
      }
   }
   //forall(i,0,v.size())cout<<v[i]<<" ";
   find_lis(v,ans);
  forall(i,0,ans.size())
   cout<<ans[i]<<" ";
   return 0;
}