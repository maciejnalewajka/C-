#include <iostream>
#include <vector>

using namespace std;

podzielne_przez_n(){
	int n;
	cout << "Podaj liczbê: ";
	cin >> n;
	vector < int> tab;
	for(int i=1;i<101;++i){
		if ((i%n) == 0){
			tab.push_back(i);
		}
	}
	if(tab.size() > 0){
		cout << "Te liczby dziel¹ siê przez " << n << " bez reszty: ";
		for(int i = 0;i < tab.size(); ++i){
			cout << tab[i] << " ";
		}
	}
	else{
		cout << "Nie ma takich liczb!";
	}
}

main(){
	system("chcp 1250");
	system("CLS");

	podzielne_przez_n();
}
