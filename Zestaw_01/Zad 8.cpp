#include<iostream>

using namespace std;

n_gwiazdek(){
	int n;
	cout << "Podaj liczbê gwiazdek: ";
	cin >> n;
	for(int i=0;i<n;++i){
		cout << "* ";
	}
}

main(){
	system("chcp 1250");
	system("CLS");
	
	n_gwiazdek();
}
