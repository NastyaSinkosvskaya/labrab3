#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i = 3;
	
	int start = 1;


	do
	{
		start += i;
		i += 2;
		cout << start<<"\n";
	} while (start != 100);
	
	//cout << start;
	
}