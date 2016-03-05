#include <iostream>
#include <algorithm>
int main(int argc, char const *argv[])
{
	
	return 0;
}
int *p;
p = new int[5];
for(int i=0;i<5;i++)
   *(p+i)=i;

int* temp = new int[6];
std::copy(p, p + 5, temp); 
delete [] p;
p = temp; 