#include<iostream>

#include<string>
using namespace std;
template<class T>
T large(T n1, T n2){
	return (n1>n2?n1:n2);
}
int main(int argc, char const *argv[])
{
	/* code */
	large(12,5.6);
	return 0;
}