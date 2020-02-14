#include<iostream>
#include<string>

using namespace std;

int dod(int a, int b){
	int c = a + b;
	return c;
}

int ode(int a, int b){
	int c = a - b;
	return c;
}

int mno(int a, int b){
	int c = a * b;
	return c;
}

int dzi(int a, int b){
	if(b == 0){
		cout << "Nie dziel przez zero!" << endl;
		return 0;
	}
	int c = a / b;
	return c;
}

int pot(int a, int b){
	int c = a ^ b;
	return c;
}

int res(int a, int b){
	int c = a % b;
	return c;
}

int calc(int a, int b, string c){
	int k = 0;
	if(c == "+"){
		k = dod(a, b);
	}
	if(c == "-"){
		k = ode(a, b);
	}
	if(c == "*"){
		k = mno(a, b);
	}
	if(c == "/"){
		k = dzi(a, b);
	}
	if(c == "^"){
		k = pot(a, b);
	}
	if(c == "%"){
		k = res(a, b);
	}
	return k;
}

int main(){
	system("chcp 1250");
	system("cls");
	
	int a, b;
	string c;
	cout << "OPERACJE:" << endl;
	cout << "Dodawanie -> +" << endl << "Odejmowanie -> -" << endl;
	cout << "Mno¿enie -> *" << endl << "Dzielenie -> /" << endl;
	cout << "Potêga -> ^" << endl << "Reszta z dzielenia -> %" << endl;
    cout << "Podaj pierwsz¹ liczbê: ";
    cin >> a;
    cout << "Podaj znak: ";
    cin >> c;
    cout << "Podaj drug¹ liczbê: ";
    cin >> b;
    
    cout << calc(a, b, c);
    
    return 0;
}
