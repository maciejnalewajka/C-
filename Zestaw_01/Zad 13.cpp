#include <iostream>

using namespace std;

void suma(int a=0, int b=0, int c=0){
	c = a+b;
	cout << c;
}

main(){
	system("chcp 1250");
	system("CLS");
	
	suma(13, 31);
}
