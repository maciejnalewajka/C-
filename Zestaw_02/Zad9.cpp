#include<iostream>
#include<vector>
#include <cstdlib>

#define N 10
using namespace std;

vector <float> zad9(vector <int> tabb){
	vector <float> tab;
	for(int i = 0;i<tabb.size();++i){
		tab.push_back((float)tabb[i]);
	}
	while(true){
		int p =0;
		for(int i = 0;i<tab.size();++i){
			if(tab[i] < 1){
				p+=1;
			}
		}
		if(p == tab.size()){
				return tab;
		}
		else{
			for(int i = 0;i<tab.size();++i){
				tab[i] = tab[i]/10;
			}
		
		}
	}
}

main(){
	system("chcp 1250");
	system("CLS");
	
	vector <int> tabb;
	for(int i = 0;i<N;++i){
		tabb.push_back(rand());
	}
	
	vector <float> o = zad9(tabb);
	for(int i=0;i<o.size();++i){
		cout << o[i] << " ";
	}
}
