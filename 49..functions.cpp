#include<iostream>
using namespace std;
void fung(int a, int& forw, int& rev)
{
	rev = a - 1;
	forw= a + 1;
	
}
int main()
{
	int x, y, z;
	cout<<"Enter a number: ";
	cin>>x;
	fung(x, y, z);
	
	cout<<"Forward= "<<y<<"\tReverce= "<<z;

	return 0;
}

