#include<iostream>
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

figury(){
	string str="", wynik="";
	int a=0,b=0,c=0,d=0,h=0,ob=0;
	cout << "Podaj nazw� figury:\n- ko�o\n- prostok�t\n- tr�jk�t\n- trapez\n";
	cin >> str;
	if(str == "ko�o") a=1;
	if(str == "tr�jk�t") a=2;
	if(str == "prostok�t") a=3;
	if(str == "trapez") a=4;
	else{
		cout << "Podana warto�� jest nieprawid�owa!";
	}
	switch(a){
		case 1:
			cout << "Podaj promie�: " << "\n";
			cin >> a;
			cout << "Pole ko�a: " << M_PI*(a*a)  << "\nObw�d ko�a: " << 2*M_PI*a;
			break;
		case 2:
			cout << "Podaj a: " << "\n";
			cin >> a;
			cout << "Podaj b: " << "\n";
			cin >> b;
			cout << "Podaj c: " << "\n";
			cin >> c;
			ob = (a+b+c)/2;
			cout << "Pole tr�jk�ta to: " << sqrt(ob*(ob-a)*(ob-b)*(ob-c)) << "\nObw�d tr�jk�ta to: " << 2*ob;
			break;
		case 3:
			cout << "Podaj a: " << "\n";
			cin >> a;
			cout << "Podaj b: " << "\n";
			cin >> b;
			cout << "Pole prostok�ta to: " << a*b << "\nObw�d prostok�ta to: " << 2*(a+b);
			break;
		case 4:
			cout << "Podaj a: " << "\n";
			cin >> a;
			cout << "Podaj b: " << "\n";
			cin >> b;
			cout << "Podaj c: " << "\n";
			cin >> c;
			cout << "Podaj d: " << "\n";
			cin >> d;
			cout << "Podaj h: " << "\n";
			cin >> h;
			cout << "Pole trapezu to: " << ((a+b)*h)/2 << "\nObw�d trapezu to: " << a+b+c+d;
			break;
	}
}


main(){
	system("chcp 1250");
	system("CLS");

	figury();
}
