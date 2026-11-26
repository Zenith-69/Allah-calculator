#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	string x, meow;
	float num_2,res;
	char z;
	int i;
	i = 0;
	bool zov = true;

	cout << "Калькулятор алляха приветствует вас!\n";
	while (zov == true) {
		SetConsoleTextAttribute(hConsole, 12);
		cout << endl << "Dля просмотра списков команд введите 'menu'.\n";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "введите первое число:\n";
		cin >> x;
		if (x == "menu") {
			SetConsoleTextAttribute(hConsole, 30);
			cout << endl << "доступные команды:\n";
			cout << "/menu - меню доступных команд\n";
			cout << "/close - завершение работы калькулятора\n";
			cout << "/version - версия калькулятора алляха\n";
			cout << "дальше - больше\n";
			SetConsoleTextAttribute(hConsole, 7);
			continue;
		}
		if (x == "version") {
			cout << "версия: 1.0";
		}
		if (x == "close") {
			cout << "удачи:3";
			zov = false;
		}
		else {
			float num_1 = stof(x);
			if (num_1 == 67) {
				cout << "ыыыы, иди убейся";
				system("shutdown /s /t 3");
				zov = false;
			}
			cout << "Введите знак:\n";
			cin >> z;
			cout << "введите второе число:\n";
			cin >> num_2;
			switch(z){
			case '+': res = num_1 + num_2; break;
			case '-': res = num_1 - num_2; break;
			case '*': res = num_1 * num_2; break;
			case '/': res = num_1 / num_2;
				if (num_2 == 0)
					cout << "ошибка. деление на ноль. попробуйте снова! \n";continue;
			break;
			default:
				cout << "ошибка! не найден символ, попробуйте снова\n";
				continue;
			}
			

			// ыы типа защита от сикс севен
			if (res == 67) {
				cout << "Hello girl\n";
				Sleep(670);
				cout << "Hi\n";
				Sleep(800);
				cout << "What's your name? (Whop)\n";
				Sleep(1000);
				cout << "My name is Poli\n";
				Sleep(800);
				cout << "Ohh goddamn (Hehe)\n";
				Sleep(1300);
				cout << "What's your number?\n";
				Sleep(1000);
				cout << "Oh my number?\n";
				Sleep(800);
				cout << "Year...\n";
				Sleep(1000);
				cout << "six seven...\n";
				Sleep(800);
				cout << "STOP...";
				Sleep(500);
				cout << "six seven??\n";
				Sleep(1000);
				cout << "Yeah.....\n";
				Sleep(1500);
				while (i != 100) {
					cout << "SIX SEVEN ";
					Sleep(100);
					cout << "SIX SEVEN\n";
					Sleep(300);
				}
			}
			//...........................

			SetConsoleTextAttribute(hConsole, 12);
			cout << "Ответ: " << res << endl;
			SetConsoleTextAttribute(hConsole, 7);
			

		}
	}

}