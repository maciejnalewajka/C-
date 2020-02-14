#include<iostream>
#include<vector>
#include <cstdlib>

#define N 10
using namespace std;


int ilePodzielnychPrzezX(vector <int> tab, int X){
	int ile = 0;
	for(int i =0;i<tab.size();++i){
		if((tab[i]%X) == 0){
			ile +=1;
		}
	}
	return ile;
}

main(){
	system("chcp 1250");
	system("CLS");

	int x = 3;
	vector <int> tabb;
	for(int i = 0;i<N;++i){
		tabb.push_back(rand());
	}
	cout << "Podzielnych: " << ilePodzielnychPrzezX(tabb, x);
}
