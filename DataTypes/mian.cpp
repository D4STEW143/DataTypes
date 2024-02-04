#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define LOGICAL_TYPES
//#define NUMERIC_TYPES
//#define VARIABLES
//#define CONSTANTS

void main()

{
	setlocale(LC_ALL, "Russian");
#if defined LOGICAL_TYPES
	cout << "DataTypes:" << endl;
	cout << endl;
	cout << true << endl;
	cout << false << endl;
	cout << endl;
#endif

#if defined NUMERIC_TYPES
	cout << "\n-----------------------------------\n";
	cout << "int:\n";
	cout << sizeof(int) << endl;
	cout << INT_MIN << "..." << INT_MAX << endl;
	cout << "\n-----------------------------------\n";

	cout << endl;

	cout << "\n-----------------------------------\n";
	cout << "long:\n";
	cout << sizeof(long) << endl;
	cout << LONG_MIN << "..." << LONG_MAX << endl;
	cout << "\n-----------------------------------\n";

	cout << endl;

	cout << "\n-----------------------------------\n";
	cout << "long long:\n";
	cout << sizeof(long long) << endl;
	cout << "Unsigned Long long:" << "0" << "..." << ULLONG_MAX << endl;
	cout << "Signed Long long:" << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << "\n-----------------------------------\n";

	cout << endl;

	cout << "\n-----------------------------------\n";
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "..." << FLT_MAX << endl;
	cout << "\n-----------------------------------\n";

	cout << endl;

	cout << "\n-----------------------------------\n";
	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "..." << DBL_MAX << endl;
	cout << "\n-----------------------------------\n";

#endif

#if defined VARIABLES
	int a = 0;
	cout << a << endl;
	double price; // объявление переменной
	price = 0; //инициализация после объявления. 
	cout << price << endl;
	double price_of_coffee;
	cout << "Введите стоимость кофе:" << endl;
	cin >> price_of_coffee; //инициализация вводом с клавиатуры.
	int number_of_cups;
	cout << "Введите количество чашек" << endl; 
	cin >> number_of_cups;
	double total_price = price_of_coffee * number_of_cups;
	cout << "Общая стоимость покупки: " << total_price << endl;
#endif

#ifdef CONSTANTS
	int speed = 0;
	const int MAX_SPEED = 250; 
	cout << typeid(5).name() << endl;
	cout << typeid(55.).name() << endl;
	double test = 55.7;
	cout << typeid(test).name() << endl;
	55; //числовая константа типа int
	55.; //числовая константа типа double
	.55; //числовая константа типа double
	.55f; //числовая константа типа float
	55l; //long
	55ll; //long_long
	55ull; //unsigned long_long
	cout << typeid(.55f).name() << endl;
#endif
	//change for commit.

}