#include <iostream>
#include <cmath>

using namespace std;

bezwzgledna(){
	float x;
	cout << "Podaj liczb�: " << "\n";
	cin >> x;
	cout << "Warto�� bezwzgl�dna z liczby " << x << " to " << abs(x) << "." << "\n\n";
}

main(){
	system("chcp 1250");
	system("CLS");
	
	bezwzgledna();
}
