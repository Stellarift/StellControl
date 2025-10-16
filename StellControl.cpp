#include <iostream>
using namespace std;
//Задание 1
/*int main() {
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите третье число: ";
	cin >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	cout << "Наибольшее число: " << max << endl;

	return 0;
}*/

//Задание 2
/*int main() {
	setlocale(LC_ALL, "ru");
	int n;
	
	cout << "Введите размер таблицы: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << i * j << " ";
		}
		cout << endl;
	}
	return 0;
}*/

//Задание 3
/*int main() {
	setlocale(LC_ALL, "ru");
	int x;
	cout << "Введите число: ";
	cin >> x;

	if (x % 3 == 0 && x % 5 == 0) {
		cout << "FizzBuzz";
	}
	else if (x % 3 == 0) {
		cout << "Fizz";
	}
	else if (x % 5 == 0) {
		cout << "Buzz";
	}
	else {
		cout << x;
	}
	cout << endl;
	return 0;
}*/

//Задание 4
/*int main() {
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите число: ";
	cin >> n;

	long long factorial = 1;
	for (int i = 1; i <= n; i++) {
		factorial *= i;
	}
	cout << "Факториал: " << factorial << endl;
	return 0;
}*/

//Задание 6
int main() {
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите число: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 15 == 0) {
			cout << "ThreeFive ";
		}
		else if (i % 3 == 0) {
			cout << "Three ";
		}
		else if (i % 5 == 0) {
			cout << "Five ";
		}
		else {
			cout << i << " ";
		}
	}
	cout << endl;
	
	return 0;
}

