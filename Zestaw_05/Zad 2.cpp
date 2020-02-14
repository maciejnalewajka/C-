#include<iostream>
#include<string>

using namespace std;

class Pies{
	string imie;
	int wiek;
	
	public:
		Pies(){
			imie = "Typowy Pies";
			wiek = 1;
		}
		void nadajImie(string im){
			imie = im;
		};
		void wyswietlImie(void){
			cout << "Imiê to: " << imie << endl;
		};
		void ustalWiek(int wi){
			wiek = wi;
		};
		void wyswietlWiek(void){
			cout << "Wiek to: " << wiek << endl;
		};
};

int main(){
	system("chcp 1250");
	system("CLS");	
	
	Pies pies;
	pies.wyswietlImie();
	pies.nadajImie("Azor");
	pies.wyswietlImie();
	pies.wyswietlWiek();
	pies.ustalWiek(11);
	pies.wyswietlWiek();
	return 0;
};
