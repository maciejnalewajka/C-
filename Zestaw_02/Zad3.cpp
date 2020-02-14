#include<iostream>

using namespace std;

zad3(int min, int max){
	if(max < min){
		int k=max;
		max = min;
		min = k;
	}
	int suma=0, niep=0, par=0, przez3=0;
	for(int i =(min+1); i<max; i++){
		suma += i;
		if((i%2) == 0){
			par +=i;
		}
		if((i%2) == 1){
			niep +=i;
		}
		if((i%3) == 1){
			przez3 +=i;
		}
	}
	cout  << "Suma wszystkich: " << suma << "\n";
	cout  << "Suma parzystych: " << par << "\n";
	cout << "Suma nieparzystych: " << niep << "\n";
	cout << "Suma podzielnyvh przez 3: " << przez3 << "\n";
}

main(){
	system("chcp 1250");
	system("CLS");
	
	zad3(2, 6);
}
