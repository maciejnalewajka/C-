#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fun(string a, string b){
	for(int i = 0;i<a.length();++i){
		if(a[i] == b[0]){
			for(int j=0;j<b.length();++j){
				if(a[i+j] != b[j]){
					break;
				}
				if(j==b.length()-1){
					return i;
				}
			}
		}
	}
	
	
	return -1;
}

main(){
	system("chcp 1250");
	system("CLS");
	
	cout << fun("ala ma kota", "am");
	
}
