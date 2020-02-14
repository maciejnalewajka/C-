#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool fun(string a, string b){
	string p = a;
	if (a.length() != b.length()){
		return false;
	}
	int dlu = a.length();
	while(dlu > 0){
		char k = a[0];
		int dlu1 = 0;
		while(dlu1 < b.length()){
			if (k == b[dlu1]){
				b.erase(b.begin()+dlu1);
				break;
			}
			dlu1 +=1;
		}
		a.erase(a.begin());
		dlu -=1;
	}
	if (a.length() == b.length()){
		return true;
	}
	return false;
}

main(){
	system("chcp 1250");
	system("CLS");
	
	if(fun("maciek", "maicek") == true){
		cout << "S¹ anagramami.";
	}
	else{
		cout << "Nie s¹ anagramami.";
	}
}
