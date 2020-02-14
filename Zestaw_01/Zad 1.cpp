#include <iostream>
#include <cmath>

using namespace std;

bezwzgledna(){
	float x;
	cout << "Podaj liczbê: " << "\n";
	cin >> x;
	cout << "Wartoœæ bezwzglêdna z liczby " << x << " to " << abs(x) << "." << "\n\n";
}

main(){
	system("chcp 1250");
	system("CLS");
	
	bezwzgledna();
}
