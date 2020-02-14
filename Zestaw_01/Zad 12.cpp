#include <iostream>

using namespace std;

int maksimum(int a=0, int b=0){
	if (a>b){
		return a;
	}
	return b;
	
}

int minimum(int a=0, int b=0){
	if (a>b){
		return b;
	}
	return a;
	
}

main(){
	system("chcp 1250");
	system("CLS");
	
	cout << maksimum(13, 23) << "\n";
	cout << minimum(46, 48);
}
