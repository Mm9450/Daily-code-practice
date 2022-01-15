#include<iostream>
using namespace std;
int main()
{
	int height = 0;
	int weight = 0;
	int BMI = 0;
	cout << "Enter your height in inches :";
	cin >> height;
	cout << "Enter your weight in pounds:";
	cin >> weight;
	cout << endl;

	BMI = (weight * 703) / (height * height);

	cout << "Your BMI is :" << BMI << endl <<endl;
	cout << "How to read your BMI :" << endl;
	cout << "Below 18.5 : underweight" << endl;
	cout << "18.5 - 24.9 : Average" << endl;
	cout << "25.0 - 29.9 : Overweight" << endl << endl;

	system("pause");
		
}