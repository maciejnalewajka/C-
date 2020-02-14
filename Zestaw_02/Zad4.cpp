#include<iostream>
#include<vector>

using namespace std;




bool zad4(int n){
	vector<int> tab;
	vector<int> tabn;
	int w = n+1;
	for (int i = 2;i<w;++i){
		tab.push_back(i);
	}
	tabn.push_back(tab[0]);
	for(int i =0;i<tab.size();++i){
		bool k=true;
		for(int j=0;j<tabn.size();++j){
			if((tab[i]%tabn[j]) == 0){
			k=false;
		}
		if(k==true){
			tabn.push_back(tab[i]);
		}
		}
	}
	for(int i = 0;i<tabn.size();++i){
		if(tabn[i] == n){
			return true;
		}
	}
	return false;
}

main(){
	system("chcp 1250");
	system("CLS");
	
	int n;
	cout << "Podaj liczbê: ";
	cin >> n;
	if(zad4(n) == 0){
		cout << "Nie jest pierwsza!";
	}
	else{
		cout << "Jest pierwsza!";
	}
}
