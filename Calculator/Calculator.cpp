#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
float a, b ,d,e ;
char c(100);
int main()
{
	cout << "Introduceti 2 numere\n";
	cin >> a >> b;
	cout << "Introduceti operatia\n - + / * ^ sqrt \n";
	cin >> c;

	switch (c)
	{
	case '+':
		cout << a << "+" << b << "=" << a + b;
		break;
	case '-':
		if (a>=b)
		{
			cout << a << "-" << b << "=" << a - b;

		}
		else
		{
			cout << b << "-" << a << "=" << b-a;
		}
		break;
	case '/':
		if (a >= b)
		{
			cout << a << "/" << b << "=" << a / b;

		}
		else
		{
			cout << b << "/" << a << "=" << b / a;
		}

	case '*':
		cout << a << "*" << b << "=" << a * b;
		break;

	case 'sqrt':
		cout << "sqrt " << a << " is " << sqrt(a) << " and " << "sqrt " << b << " is " << sqrt(b);
			break;
	case '^':
		cout << "Introduceti numarul care il veti ridica la putere\n";
		cin >> d;
		if (d==a)
		{
			cout << "Introduceti puterea dorita\n";
			cin >> e;
			cout << a << " ^ " << e << " = " << pow(a, e);
		}
		else
		{
			cout << "Introduceti puterea dorita";
			cin >> e;
			cout << b << "^" << e << " = " << pow(b, e);
		}
		break;
		//de facut cu log cu baza ce o poti alege
		// de facut alt proiect bank ce va salva datele intrun fisier , cat am cheltuit si cat am primit , pe ce , ce poate fi scos etc..
		//facut programe de la bac info
		// creat program ce va ajuta cu mate bac
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

