#include<iostream>

using namespace std;

int zad2(float x, float y){
	if (x==0 or y == 0){
		return 0;
	}
	if (y>0){
		if (x>0){
			return 4;
		}
		return 1;
	}
	if(x>0){
		return 3;
	}
	return 2;
}

main(){
	system("chcp 1250");
	system("CLS");
	
	float x, y;
	cout << "Podaj pierwsz¹ liczbê: ";
	cin >> x;
	cout << "Podaj drug¹ liczbê: ";
	cin >> y;
	cout << zad2(x, y);
}
