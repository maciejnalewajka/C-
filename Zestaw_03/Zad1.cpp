#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int fun1(string str, char znak) {
	string a;
	char b;
	if((typeid(str).name() == typeid(a).name()) or (typeid(znak).name() == typeid(b).name())){
		int ile=0;
		for(int i=0;i<str.length();++i){
			if (str[i] == znak){
				ile +=1;
			}
		}
		return ile;
	}
	else{
		cout << "\nWprowadŸ ci¹g znaków i jeden znak!\n";
	}
	
}

main(){
	cout << fun1("rabarbar", 'r');
}
