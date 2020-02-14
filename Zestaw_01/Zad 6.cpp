#include <iostream>
#include <vector>

using namespace std;

miesiac_dzien(){
	vector < string > mie;
	vector < string > dni;
	mie.push_back("Styczeñ");
	mie.push_back("Luty");
	mie.push_back("Marzec");
	mie.push_back("Kwiecieñ");
	mie.push_back("Maj");
	mie.push_back("Czerwiec");
	mie.push_back("Lipiec");
	mie.push_back("Sierpieñ");
	mie.push_back("Wrzesieñ");
	mie.push_back("PaŸdziernik");
	mie.push_back("Listopad");
	mie.push_back("Grudzieñ");
	dni.push_back("Poniedzia³ek");
	dni.push_back("Wtorek");
	dni.push_back("Œroda");
	dni.push_back("Czwartek");
	dni.push_back("Pi¹tek");
	dni.push_back("Sobota");
	dni.push_back("Niedziela");

	int m, d;
	while (true){
		cout << "Podaj liczbê miesi¹ca:-- ";
		cin >> m;
		cout << "\nPodaj liczbê dnia:-- ";
		cin >> d;
		if(m > 0 and m < 13 and d < 8 and d > 0){
			break;
		}
		cout << "\nPodaj poprawne dane!\n";
	}
	cout << "Wybra³eœ: " << mie[m-1] << ", " << dni[d-1];
}

main(){
	system("chcp 1250");
	system("CLS");
	
	miesiac_dzien();
}
