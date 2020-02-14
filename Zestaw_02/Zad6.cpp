#include<iostream>
#include<vector>
#include <cstdlib>


using namespace std;


zad6(){
	int iloczyn=1, ilop=1, ilon=1, wie=0, mnie=0;
	vector <int> tab;
	for(int i = 0; i<10;++i){
		tab.push_back(rand());
	}
	for(int i = 0;i<10;++i){
		cout << tab[i] << " ";
		iloczyn *= tab[i];
		if((tab[i]%2) == 0){
			ilop *= tab[i];
		}
		if((tab[i]%2) == 1){
			ilon *= tab[i];
		}
		if(tab[i] > 0){
			wie +=1;
		}
		if(tab[i] < 0){
			mnie +=1;
		}
	}
	cout << "\n" << "Iloczyn: " << iloczyn;
	cout << "\n" << "Iloczyn parzystych: " << ilop;
	cout << "\n" << "Iloczyn nieparzystych: " << ilon;
	cout << "\n" << "Wiêkszych od zera: " << wie << ", mniejszych od zera: " << mnie;
}

main(){
	system("chcp 1250");
	system("CLS");
	
	zad6();
}
