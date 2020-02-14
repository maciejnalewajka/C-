#include <iostream>
#include <string>

using namespace std;

string fun(string a, int n){
	if(a.length()<n){
		return a;
	}
	int k = (a.length()/n);
	for(int i=0;i<k;++i){
		a.erase(a.begin()+(n-1)*(i+1));
	}
	return a;
}

main(){
	system("chcp 1250");
	system("CLS");
	
	cout << fun("przyklad", 2);
}
