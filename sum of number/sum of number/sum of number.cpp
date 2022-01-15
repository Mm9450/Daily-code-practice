// sum of number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int sum(int num) {
	int s = 0;
	for (int i = 1; i <= num; i++) {
		s = s + num *(num + 1) / 2;
		return s;
	}
}

int main()
{
	int n;
	cin >> n;
	int ans = sum(n);
	cout << ans << endl;
	return 0;
	
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
