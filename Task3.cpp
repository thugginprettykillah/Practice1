#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	// 1 задание
	cout << "int: " << sizeof(int) << " bytes\n";
	cout << "short int: " << sizeof(short int) << " bytes\n";
	cout << "long int: " << sizeof(long long int) << " bytes\n";
	cout << "float: " << sizeof(float) << " bytes\n";
	cout << "double: " << sizeof(double) << " bytes\n";
	cout << "long double: " << sizeof(long double) << " bytes\n";
	cout << "char: " << sizeof(char) << " bytes\n";
	cout << "bool: " << sizeof(bool) << " bytes\n\n";

	// 2 задание
	int num1;
	cout << "Введите число типа int: ";
	cin >> num1;
	cout << "Двоичное представление этого числа в памяти компьютера: \n";
	unsigned int mask = 1 << 31;
	for (int i = 0; i < 32; ++i) {
		putchar(num1 & mask ? '1' : '0');
		if (i % 8 == 0 || i == 31)
			cout << " ";
		mask >>= 1;
	 }
	cout << "\n\n";

	// 3 задание
	union {
		float num2;
		int a;
	};
	cout << "Введите число типа float: ";
	cin >> num2;
	cout << "Двоичное представление этого числа в памяти компьютера: \n";
	mask = 1 << 31;
	for (int i = 0; i < 32; ++i) {
		putchar(a & mask ? '1' : '0');
		if (i == 0 || i == 8) {
			cout << " ";
		}
		mask >>= 1;
	}
	cout << "\n\n";

	// 4* задание
	union {
		double num3;
		int Arr[2];
	};
	mask = 1 << 31;
	cout << "Введите число типа double: ";
	cin >> num3;
	cout << "Двоичное представление этого числа в памяти компьтера: \n";
	for (int i = 1; i >= 0; --i) {
		for (int j = 0; j < 32; ++j) {
			putchar(Arr[i] & mask ? '1' : '0');
			mask >>= 1;
			if ((j == 0 && i == 1) || (j == 11 && i == 1))
				cout << ' ';
		}
		mask = 1 << 31;
	}
	cout << "\n";
	return 0;
}