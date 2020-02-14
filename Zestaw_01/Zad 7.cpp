#include<iostream>

using namespace std;

float przelicz(){
	int n;
	string str;
	cout << "Podaj liczbê: ";
	cin >> n;
	cout << "Na co? cal/cen ? ";
	cin >> str;
	if(str == "cen"){
		return n*2.54;
	}
	if(str == "cal"){
		return n*0.39370;
	}
	else{
		cout << "Podaj poprawn¹ wartoœæ!";
	}
}

main(){
	system("chcp 1250");
	system("CLS");

	cout << przelicz();
}
