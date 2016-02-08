#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%I64d",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define inputN(i,a)					for(int i=0;i<a.size();i++) scanf("%d",&a[i])
#define all(a)                      a.begin(), a.end()
#define WHILE(n)					while(n--)
#define INF                         (int)1e9
#define pb                          push_back
#define minimum(a)					*min_element(a.begin(), a.end())
#define maximum(a)					*max_element(a.begin(), a.end())
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
// struct numbers
// {
// 	int data;
// };
long long n;
long long Block_size;//=(int)sqrt(n);
std::vector<long long> CNT(1000000);
long long Current=0;
long long ANSWER[1000000];
struct Query
{
	long long left ;
	long long right;
	long long index;
};


bool compare(const Query& q1,const Query& q2){

	if(q1.left/Block_size!=q2.left/Block_size)
		return q1.left<q2.left;
	return q1.right<q2.right;
}
inline void upd(long long x, long long mult)
{
    Current += 2 * mult * CNT[x] * x + x;
    CNT[x] += mult;
}

void add(long long x){
	upd(x, 1);
}

void remove(long long x){
	upd(x, -1);
}
// void add(long long x){
// 	if(x==-1 || x==0)
// 	{
// 		return ;
// 	}
// 	Current-=CNT[x]*CNT[x]*x;
// 	CNT[x]++;
// 	Current+=CNT[x]*CNT[x]*x;
// 	//cout<<"x="<<x<<" CNT[x]="<<CNT[x]<<"           ";
// }
// void remove(long long x){
// 	if(x==-1 || x==0)
// 	{
// 		return ;
// 	}
// 	Current-=CNT[x]*CNT[x]*x;
// 	CNT[x]--;
// 	Current+=CNT[x]*CNT[x]*x;
// 	//cout<<"x="<<x<<" CNT[x]="<<CNT[x]<<"          ";
// }

int main(int argc, char const *argv[])
{
	long long q;
	sl(q);sl(n);

	Block_size=(long long)(sqrt(n));
	std::vector<long long> v(n);

	forall(i,0,1000000)CNT[i]=0;
	forall(i,0,n)s(v[i]);
	std::vector<Query> Q(q);
	forall(i,0,q){
		
		sl(Q[i].left);Q[i].left--;
		sl(Q[i].right);Q[i].right--;
		Q[i].index=i;
	}
	sort(all(Q),compare);
	//forall(i,0,q)//cout<<Q[i].right<<" "<<Q[i].left<<" "<<Q[i].index<<"\n";
	long long MO_r=-1,MO_l=0;
	forall(i,0,q){
		//cout<<Q[i].left<<"  "<<Q[i].right<<"\n ";
		while(MO_r<Q[i].right)
		{

			MO_r++;
			add(v[MO_r]);//cout<<"B  "<<MO_l+1<<" "<<MO_r+1<<" " ;
			//cout<<Current<<" \n";
		}
		while(MO_r>Q[i].right)
		{


			remove(v[MO_r]);MO_r--;//cout<<"A"<<MO_l+1<<" "<<MO_r+1<<" ";
			//cout<<Current<<" \n";
		}
		while(MO_l>Q[i].left)
		{

			MO_l--;
			add(v[MO_l]);////cout<<"C"<<MO_l+1<<" "<<MO_r+1<<" ";
			////cout<<Current<<" \n";
		}
		while(MO_l<Q[i].left)
		{


			remove(v[MO_l]);MO_l++;//cout<<"D"<<MO_l+1<<" "<<MO_r+1<<" ";
			//cout<<Current<<" \n";
		}

		ANSWER[Q[i].index]=Current;
	}
	forall(i,0,q)
	printf("%I64d\n",ANSWER[i]);
	//forall(i,0,10)//cout<<CNT[i]<<" ";
	return 0;
}