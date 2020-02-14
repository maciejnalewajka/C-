#include <iostream>
#include <sstream> 


using namespace std;

int ile(float x){
	int ret=0;
	ostringstream pp;
	pp << x;
	string s1 = pp.str();
	for(int i=0;i<s1.length()-1;++i){
		ret = i;
		if(s1[i] == '.'){
			return ret;
		}
	}
	return ret;
}

precyzja_2(){
	float x, y, n, suma, roznica, iloraz, iloczyn;
	cout << "Podaj liczbê: " << "\n";
	cin >> x;
	cout << "Podaj drug¹ liczbê: " << "\n";
	cin >> y;
	suma = x + y;
	roznica = x - y;
	iloczyn = x * y;
	iloraz = x / y;
	cout.precision( ile(suma)+2 );
	cout << "Suma podanych liczb to " << suma << "\n";
	cout.precision( ile(roznica)+2 );
	cout << "Ró¿nica podanych liczb to " << roznica << "\n";
	cout.precision( ile(iloraz)+2 );
	cout << "Iloraz podanych liczb to " << iloraz << "\n";
	cout.precision( ile(iloczyn)+2 );
	cout << "Iloczyn podanych liczb to " << iloczyn << "\n";
}

main(){
	system("chcp 1250");
	system("CLS");
	
	precyzja_2();
}
