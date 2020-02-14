#include<iostream>
#include <cmath>


using namespace std;


int nwd(int a, int b){
	while(b != 0){
		int c = b;
		b = a%b;
		a=c;
	}
	return a;
}

int nww(int a, int b){
	return abs(a*b/nwd(a, b));
}

main(){
	system("chcp 1250");
	system("CLS");
	
	int a, b;
	cout << "Podaj pierwsz¹ liczbê: ";
	cin >> a;
	cout << "Podaj drug¹ liczbê: ";
	cin >> b;
	cout << "NWW to: " << nww(a, b);
}
