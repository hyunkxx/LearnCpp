#include <iostream>

using namespace std;

int Factorial(int number)
{	
	return number == 0 ? 1 : number * Factorial(number - 1); 
}

int main()
{	
	int number = 0;
	cout << "Factorial" << endl;

	while (!cin.eof()) 
	{
		cout << "������ �Է��ϼ��� " << endl;
		cin >> number;
		cout << number << "! = " << Factorial(number) <<endl;
	}
}