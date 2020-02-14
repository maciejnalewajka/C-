#include<string>
#include "Zad 2a.cpp"
#include "Zad 2b.cpp"
#include "Zad 2c.cpp"
#include "Zad 2d.cpp"
#include "Zad 2e.cpp"

class Calc{
	public:
		int calc(int a, int b, string c){
			int k = 0;
			if(c == "+"){
				Dodawanie d;
				k = d.dodaj(a, b);
			}
			if(c == "-"){
				Odejmowanie o;
				k = o.odejmij(a, b);
			}
			if(c == "*"){
				Pomnoz p;
				k = p.pomnoz(a, b);
			}
			if(c == "/"){
				Podziel l;
				k = l.podziel(a, b);
			}
			if(c == "^"){
				Potega i;
				k = i.doPotegi(a, b);
			}
			return k;
		}
};
