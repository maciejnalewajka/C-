#include<iostream>
#include<string>
#include "Zad 2f.cpp"

using namespace std;

int main(){
	system("chcp 1250");
	system("CLS");	
	
	Calc calc;
	
	int a, b;
	string c;
	cout << "OPERACJE:" << endl;
	cout << "Dodawanie -> +" << endl << "Odejmowanie -> -" << endl;
	cout << "Mno�enie -> *" << endl << "Dzielenie -> /" << endl;
	cout << "Pot�ga -> ^" << endl << "Reszta z dzielenia -> %" << endl;
    cout << "Podaj pierwsz� liczb�: ";
    cin >> a;
    cout << "Podaj znak: ";
    cin >> c;
    cout << "Podaj drug� liczb�: ";
    cin >> b;
    
	cout << calc.calc(a, b, c);
	
	return 0;
};
