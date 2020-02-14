#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

typedef int (*Type)[1000][2];

int tablica[1000][2] = {};

int random(int n){
		  int i;
		  i = rand()%n + 1;
		  return i;
		}
		
void generuj(){
	for(int i=0; i<1000; i++){
		tablica[i][0] = random(800);
		tablica[i][1] = random(600);
	}
}

void usun_i_pokaz(){
	generuj();
	int k = 0;
	for(int i=0; i<1000; i++){
		for(int j = i+1; j<1000;j++){
			if(tablica[i][0] == tablica[j][0] and tablica[i][1] == tablica[j][1]){
				k++;
				tablica[i][0] = 801;
				tablica[i][1] = 601;
			}
		}
	}
	cout << "Tablica: " << endl;
	for(int i=0; i<1000; i++){
		if(tablica[i][0] <= 800 and tablica[i][1] <= 600){
			cout << "(" << tablica[i][0] << ", " << tablica[i][1] << ")" << ", ";
		}
	}
	cout << endl << "Iloœæ powtórzonych punktów: " << k;
}


main(){
	system("chcp 1250");
	system("cls");
	srand(time(0));
	
	usun_i_pokaz();
}
