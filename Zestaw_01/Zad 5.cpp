#include <iostream>
#include <vector>

using namespace std;


info(){
	int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;
	int najm=0, najw=0, mniej=0, sr=0;
	cout << "Podaj liczbê nr. 1: ";
	cin >> n1;
	cout << "Podaj liczbê nr. 2: ";
	cin >> n2;
	cout << "Podaj liczbê nr. 3: ";
	cin >> n3;
	cout << "Podaj liczbê nr. 4: ";
	cin >> n4;
	cout << "Podaj liczbê nr. 5: ";
	cin >> n5;
	cout << "Podaj liczbê nr. 6: ";
	cin >> n6;
	vector <int> tab;
	tab.push_back(n1);
	tab.push_back(n2);
	tab.push_back(n3);
	tab.push_back(n4);
	tab.push_back(n5);
	tab.push_back(n6);
	najm = n1;
	for(int i=0;i<tab.size();++i){
		sr += tab[i];
		if(tab[i] > najw){
			najw = tab[i];
		}
		if(tab[i] < najm){
			najm = tab[i];
		}
		if(tab[i]<0){
			++mniej;
		}
		
	}
	
	
	cout << "Najmniejsza: " << najm;
	cout << "\nNajwiêksza: " << najw;
	cout << "\nMniejszych od zera: " << mniej;
	cout << "\nŒrednia arytmetyczna: " << (sr/6);
}

main(){
	system("chcp 1250");
	system("CLS");
	
	info();
}
