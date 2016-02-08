#include <bits/stdc++.h>
using namespace std;

void MERGE(std::vector<int>& v,std::vector<int>& l,std::vector<int>& r){
	int i=0,j=0,k=0;
	while(i<l.size() && j<r.size()){
		if(l[i]<r[j]){
			v[k]=l[i];
			i++;
		}
		else{
			cunt++;
			v[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<l.size()){
		v[k]=l[i];
		i++;
		k++;
	}
	while(j<r.size()){
		v[k]=r[j];
		j++;
		k++;
	}	
}
void MERGESORT(std::vector<int>& v){
	if(v.size()<2)return;
	
	
	int mid=v.size()/2;
	std::vector<int> l(mid),r(v.size()-mid);
	for(int i=0;i<mid;i++)l[i]=v[i];
	for(int i=mid,k=0;i<v.size();i++,k++)r[k]=v[i];
	MERGESORT(l);
	MERGESORT(r);
	MERGE(v,l,r);
}
void print(std::vector<int>& v){
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
}
void quick_sort (std::vector<int>& a) {
    int i, j, p, t;
    int n=v.size();
    if (n < 2)
        return;
    p = a[n / 2];
    for (i = 0, j = n - 1;; i++, j--) {
        while (a[i] < p)
            i++;
        while (p < a[j])
            j--;
        if (i >= j)
            break;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    quick_sort(a, i);
    quick_sort(a + i, n - i);
}


int main(int argc, char const *argv[])
{

	std::vector<int> v(5);
	srand(time(NULL));
	for(int i=0;i<5;i++){v[i]=(rand()%15);cout<<v[i]<<" ";}
	MERGESORT(v);
	cout<<"\n";
	print(v);
	return 0;
	
}