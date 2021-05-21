#include<iostream>
using namespace std;
int* dem()
{
	int k = 5;
	int *p = &k;
	delete p;
	return p;
}
int main()
{
	cout<<dem;
	return 0;
}
