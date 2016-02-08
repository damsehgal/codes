/*Today is Kriti's birthday but I forgot to bring a gift for her.
She is very angry with me. I have an idea for a gift.
She likes coding very much. 
Why not give her a problem to solve as her gift?
I know a problem but I am not sure whether its solvable or not.
The problem initially has N strings numbered 1 to N. 
The program has to answer Q queries. Each query is of the form l r S. 
For each query, the program has to print the number of times 
the string S appears in the range [l,r].
Help me by solving the problem!!
Sample Input(Plaintext Link)
3
abc
def
abc
3
1 2 abc
1 3 abc
1 2 hgj
Sample Output(Plaintext Link)
1
2
0
*/
#include <bits/stdc++.h>
using namespace std;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
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
int t;
std::map<string, int> Map;
struct query
{
	int l;
	int r;
	int index;
	string str;
};
struct ANS{
	int answer;
	int index;
};
bool compare(const query& q1,const query& q2){
	int block_size=(int)sqrt(t);
	if(q1.l/block_size != q2.l/block_size)
		return q1<q2;
	return q1.r<q2.r;
}
int add(int answer,string next){
	answer-=Map[next];
	Map[next]++;
	answer+=Map[next];
	return answer;
}
int remove(int answer,string prev){
	answer-=Map[prev];
	Map[prev]--;
	answer+=Map[prev];
	return answer;
}
int main(int argc, char const *argv[])
{
	
	cin>>t;
	std::vector<string> strings(t);
	WHILE(t){
		string a;
		cin>>a;
		strings[i]=a;
	}
	int q;
	cin>>q;
	std::vector<query> v(q);
	forall(i,0,q){
		cin>>v[i].l>>v[i].r>>v[i].str;
		v[i].index=i;
	}
	int mo_r=-1,mo_l=0;
	sort(all(v),compare);
	std::vector<ANS> ans;
	int ANSWER=0;
	forall(i,0,q)
	{
		//apply add and remove functions
		while(v[i].r<mo_r){
			add(ANSWER,strings[i]);
		}
		while(v[i].r>mo_r){
			remove(ANSWER,)
		}


	}
	return 0;
}