#include <iostream>
#include <vector>

using namespace std;

miesiac_dzien(){
	vector < string > mie;
	vector < string > dni;
	mie.push_back("Stycze�");
	mie.push_back("Luty");
	mie.push_back("Marzec");
	mie.push_back("Kwiecie�");
	mie.push_back("Maj");
	mie.push_back("Czerwiec");
	mie.push_back("Lipiec");
	mie.push_back("Sierpie�");
	mie.push_back("Wrzesie�");
	mie.push_back("Pa�dziernik");
	mie.push_back("Listopad");
	mie.push_back("Grudzie�");
	dni.push_back("Poniedzia�ek");
	dni.push_back("Wtorek");
	dni.push_back("�roda");
	dni.push_back("Czwartek");
	dni.push_back("Pi�tek");
	dni.push_back("Sobota");
	dni.push_back("Niedziela");

	int m, d;
	while (true){
		cout << "Podaj liczb� miesi�ca:-- ";
		cin >> m;
		cout << "\nPodaj liczb� dnia:-- ";
		cin >> d;
		if(m > 0 and m < 13 and d < 8 and d > 0){
			break;
		}
		cout << "\nPodaj poprawne dane!\n";
	}
	cout << "Wybra�e�: " << mie[m-1] << ", " << dni[d-1];
}

main(){
	system("chcp 1250");
	system("CLS");
	
	miesiac_dzien();
}
