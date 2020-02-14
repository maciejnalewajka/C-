#include<iostream>

using namespace std;
int silnia(int n){
	if(n < 0) return 0;
	if(n == 0 or n == 1) return 1;
	if(n > 1){
		return n*silnia(n-1);
	}
}
int silnia_podwojna(int n){
	if(n < 0) return 0;
	if(n == 0 or n == 1) return 1;
	if(n > 1){
		silnia(silnia(n*(n-2)));
	}
	
}

main(){
	system("chcp 1250");
	system("cls");
	
	cout << silnia_podwojna(3);
	
}
