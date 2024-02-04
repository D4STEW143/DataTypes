#include <iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS 
//#define ASSIGNMENT_OPERATORS
//#define INCREMENT_DECREMENT
//#define COMPAUND_ASSIGNMENTS
void main()
{
	setlocale (LC_ALL, "");
	cout << "Hello operators" << endl;
#ifdef ARITHMETICAL_OPERATORS
	//Unary +, -;
	//Binary +, -, *, /, %;
	//cout << 17 / 3 << endl;
	//cout << 17 % 3 << endl;
	cout << 3. / 17 << endl;
	cout << 3. % 17 << endl;
#endif

#ifdef ASSIGNMENT_OPERATORS
	int a = 2; //= это оператор присвоить. 
	//l-value это int a, а r-value это 2.
	int a1, b, c; //объявление по ассоциации
	a1 = b = c = 0; //инициализация по ассоциации (справа налево)
	cout << a << "\t" << b << "\t" << c << endl;
#endif

#ifdef INCREMENT_DECREMENT
	int a2 = 0;
	++a2; //префиксный инкремент
	a2--; //постфиксный декремент
	int j = a2++;
	int g = ++a2;
	cout << a2 << endl;
	cout << j << endl;
	cout << g << endl;
#endif

#ifdef COMPAUND_ASSIGNMENTS

	int a_r, b_r;
	a_r = 2;
	b_r = 3;
	a_r = a_r + b_r;
	cout << a_r << endl;
	a_r += b_r;
	cout << a_r << endl;

#endif
}
//кидаю на гитха для дз.