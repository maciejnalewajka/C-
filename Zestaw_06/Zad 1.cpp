#include<iostream>
#include<string>

using namespace std;

class Mammal{
	int wiek;
	int waga;
	
	public:
		Mammal(){
			waga = 15;
			wiek = 10;
		}
		
		void setWaga(int wa){
			waga = wa;
		};
		
		int getWaga(){
			return waga;
		};
		
		void setWiek(int wi){
			wiek = wi;
		};
		
		int getWiek(){
			return wiek;
		};
};

class Pies : public Mammal{
	public:
		int wagaRazyWiek(){
			return getWaga() * getWiek();
		}
};

class Kot : public Mammal{
	public:
		int wagaDodacWiek(){
			return getWaga() + getWiek();
		}
};

int main(){
	system("chcp 1250");
	system("CLS");	
	
	Mammal mammal;
	mammal.getWaga();
	mammal.getWiek();
	mammal.setWaga(12);
	mammal.setWiek(5);
	
	Pies pies;
	pies.getWaga();
	pies.getWiek();
	pies.setWaga(16);
	pies.setWiek(15);
	pies.wagaRazyWiek();
	
	Kot kot;
	kot.getWaga();
	kot.getWiek();
	kot.setWaga(6);
	kot.setWiek(2);
	kot.wagaDodacWiek();
	
	return 0;
};
