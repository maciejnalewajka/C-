#include<iostream>
#include<string>
#include<sstream>
#include<ctime>
#include<cstdlib>

using namespace std;

class Tabliczka{
	int n;
	public:
		Tabliczka(){
			n=0;
		}
		
		void setN(int k){
			n = k;
		}
		
		int getN(){
			return n;
		}

		string print(){
			string wynik = "";
			for(int i=1; i<n+1; i++){
				for(int j=1; j<n+1; j++){
					stringstream c1, c2, c3;
					c1 << i;
					c2 << j;
					c3 << (i*j);
					string d1 = c1.str();
					string d2 = c2.str();
					string d3 = c3.str();
					wynik = wynik + d1 + "x" + d2 + "=" + d3  + "    ";
				}
				wynik += "\n";
			}
			return wynik;
		}
		
		int random(){
		  int i;
		  i = rand()%n + 1;
		  return i;
		}
		
		string nauka(){
			system("cls");
			string wynik = "Ile jest: ";
			int a = random();
			int b = random();
			int c = 0;
			stringstream c1, c2;
			c1 << a;
			c2 << b;
			string d1 = c1.str();
			string d2 = c2.str();
			wynik = wynik + d1 + "x" + d2 + "?\n";
			cout << wynik;
			while(true){
				cin >> c;
				if(c == (a * b)){
					cout << "Brawo!";
					return "";
				}
				else{
					cout << wynik;
				}
			}
			return wynik;
		}
};

main(){
	system("chcp 1250");
	system("cls");
	srand(time(0));
	
	Tabliczka tab;
	tab.setN(5);
	cout << tab.print();
	
	cout << tab.nauka();
}
