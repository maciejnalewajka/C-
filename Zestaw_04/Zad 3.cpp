#include <iostream>

using namespace std;

float fun(int n){
	float sum = 1;
	if(n > 1){
		for(int i=2;i<n+1;i++){
			sum += (float)1/i;
		}
	}
	return sum;
}


main(){
	system("chcp 1250");
	system("CLS");
	
	int n = 0;
	cout << "Podaj liczbê: ";
	cin >> n;
	
	cout << fun(n);
}
