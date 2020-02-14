#include<iostream>
#include<vector>
#include <cstdlib>

#define N 10
using namespace std;


int zad7(vector <int> tab, int n){
	vector <int> ntab;
	int najw;
	if(tab.size() >= 0){
		for(int i = 0;i<n;++i){
			ntab.push_back(tab[i]);
			}
		najw = ntab[0];
		for(int i=1;i<ntab.size();++i){
			if (najw < ntab[i]){
				najw = ntab[i];
			}
		}
		
	}
	else{
		najw = tab[0];
		for(int i=1;i<tab.size();++i){
			if (najw < tab[i]){
				najw = tab[i];
			}
		}
	}
	return najw;
}

main(){
	system("chcp 1250");
	system("CLS");

	vector <int> tabb;
	int n;
	for(int i = 0;i<N;++i){
		tabb.push_back(rand());
	}
	cout << "Podaj nowy rozmiar tablicy: ";
	cin >> n;
	cout << "Najwiêkszy element: ";
	cout << zad7(tabb, n);
}
