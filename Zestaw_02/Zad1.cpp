#include<iostream>
#include<string>

using namespace std;

string zad1(string str){
	string nowy="";
	for(int i=0;i<str.length();++i){
		char n = str[i];
		if (str[i] == ' '){
			n = '_';
		}
		nowy += n;
	}
	return nowy;
}

main(){
	system("chcp 1250");
	system("CLS");
	
	cout << zad1("Maciek i Ola");
}
