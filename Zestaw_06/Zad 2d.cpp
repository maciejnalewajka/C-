#include<iostream>
using namespace std;
class Podziel{
	public:
		int podziel(int a, int b){
			if(b == 0){
				cout << "Nie dziel przez zero!" << endl;
				return 0;
			}
			int c = a / b;
			return c;
		}
};
