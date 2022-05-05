#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number : " << endl;
	cin >> num;
	int one = 1;
	int two = 1;
	cout << one << " ";
	cout << two << " ";
	for (int i = 1; i <= num - 2; ++i)
		{cout << one + two << " ";
		int x = two;
		two = one + two;
		one = x;
		}
	
}
