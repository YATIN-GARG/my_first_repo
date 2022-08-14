#include<iostream>
using namespace std;
#define LENGTH 20

int main()
{
	char name[LENGTH];
	gets(name);
	cout << "Hello " <<  name << "!\n";
	return 0;
}
