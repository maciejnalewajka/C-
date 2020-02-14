#include <iostream>
#include <fstream>

using namespace std;

int pliki(string a, string b){
	int k = 0;
    fstream plik1;
    fstream plik2;
    plik1.open(a.c_str(), ios::in);
    plik2.open(b.c_str(), ios::in);
	if(plik1.good() and plik2.good()){
        string napis1, napis2;
        
        while(!plik1.eof()){
        	k++;
            getline(plik1, napis1);
            getline(plik2, napis2);
            if(napis1.compare(napis2) != 0){
            	return k;
			}
        }
        plik1.close();
        plik2.close();
        return 0;
    }
	else{
		cout << "Nie uda³o siê otworzyæ pliku!" << endl;
		return 0;
	}
}

int main(){
	system("chcp 1250");
	system("cls");
	
	cout << pliki("1.txt", "2.txt");
    
    return 0;
}
