#include<iostream>
#include<string>
#include <ctype.h>

using namespace std;

string tekst = "";
string login_p = "login";
string haslo_p = "Alfa";
string login = "";
string haslo = "";
bool k = false;

char znaki[] = {'a','�','b','c','�','d','e','�','f','g','h','i','j','k','l','�',
	'm','n','�','o','�','q','p','r','s','�','t','u','w','v','x','y','z','�','�','A',
	'�','B','C','�','D','E','F','G','H','I','J','K','L','�','M','N','�','O','�',
	'Q','P','R','S','�','T','U','W','V','X','Y','Z','�','�','1','2','3','4','5',
	'6','7','8','9','0','`','~','!','@','#','$','%','^','&','*','(',')','_','-',
	'=','+','[',']','{','}',';',':',',','<','.','>','/','?', ' '};

zaloguj(){
	bool k = false;
	while(k == false){
		cout << "Podaj login: ";
		cin >> login;
		cout << "Podaj has�o: ";
		cin >> haslo;
		if(login == login_p and haslo == haslo_p){
			k = true;
			cout << "Zalogowano pomy�lnie!\n";
			cout << "Podaj tekst: ";
			cin >> tekst;
			break;	
		}
		cout << "Z�e dane!" << endl;
	}
}

wyswietl(string a){
	cout << "Has�o to: " << a;
}

void generuj(int dlugosc, string s){
	if(k == true) return;
	if(dlugosc == 0){
		if(s == haslo_p){
			k = true;
			wyswietl(s);
		}
		return;
	}
	for(int i = 0; i < 109; i++){
		string dod = s + znaki[i];
		generuj(dlugosc-1, dod);
	}
}

zlam(){
	int dlugosc = 1;
	while(k == false){
		generuj(dlugosc, "");
		dlugosc++;
	}
}

main(){
	system("chcp 1250");
	system("cls");
	zaloguj();
	zlam();
}
