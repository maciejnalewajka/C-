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
	cout << "Podaj pierwsz� liczb�: ";
	cin >> a;
	cout << "Podaj drug� liczb�: ";
	cin >> b;
	cout << "NWW to: " << nww(a, b);
}
