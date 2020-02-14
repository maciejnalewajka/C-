#include<iostream>
#include<string>
#include<sstream>
 
using namespace std;
 
int potega(int a, int s){
    int wynik = 1;
    for(int i = 0; i<s; i++){
    	wynik*=a;
	}
    return wynik;
}
 
string znak(int li){
	if((li>=0) and (li<=9)){
		stringstream c1;
		c1 << li;
		string d1 = c1.str();
		return d1;
	}
	switch (li){
		case 10:
			return "A";
		case 11:
			return "B";
		case 12:
			return "C";
		case 13:
			return "D";
		case 14:
			return "E";
		case 15:
			return "F";
		case 16:
			return "G";
		case 17:
			return "H";
		case 18:
			return "I";
		case 19:
			return "J";
	}
		
}

int znak2(char li){
	switch (li){
		case 'a':
			return 10;
		case 'b':
			return 11;
		case 'c':
			return 12;
		case 'd':
			return 13;
		case 'e':
			return 14;
		case 'f':
			return 15;
		case 'g':
			return 16;
		case 'h':
			return 17;
		case 'i':
			return 18;
		case 'j':
			return 19;
	}
	return (int)li-48;
}

string odwrot(string a){
	string b="";
	for(int i = a.size()-1; i>=0; i--){
		b += a[i];
	}
	return b;
}

string zmiana(int a, int b){
	int c = 0, d = 0;
	string wynik = "";
	if(b>a) return znak(a);
	while(true){
		c = a%b;
		d = a/b;
		a = d;
		wynik += znak(c);
		if(a <= 0){
			return odwrot(wynik);
		}
	}
	return "0";
}

int zmiana2(string a, int c){
	a = odwrot(a);
	int wynik = 0;
	for(int i = 0; i<a.size(); i++){
		int b = znak2(a[i]);
		wynik = wynik + b*(potega(c, i));
	}
	return wynik;
}

string wyswietl(){
	int c = 0;
    string a="";
    cout << "Podaj z jakiego systemu (np. 2): ";
    cin >> c;
    cout << "Podaj liczbê: ";
    cin >> a;
    int f = zmiana2(a, c);
	for(int i = 2; i<=20; i++){
		cout << "Z systemu " << c << " na system " << i << ": " << zmiana(f, i) << endl;
	}
}
 
int main(){
    system("chcp 1250");
    system("cls");
    
    int b = 0, c = 0;
    string a="";
    cout << "Podaj z jakiego systemu (np. 2): ";
    cin >> c;
    cout << "Podaj liczbê: ";
    cin >> a;
    cout << "Podaj na jaki system (np. 2): ";
    cin >> b;
  
	if((c>1) and (c<20)){
		if(c == 10){
			int num=0;
			istringstream iss (a);
			iss >> num;
    		cout << zmiana(num, b);
		}
		else{
			cout << zmiana(zmiana2(a, c), b);
		}
	}
	else{
		cout << "Podano z³e dane!";
	}
    
    return 0;
}
