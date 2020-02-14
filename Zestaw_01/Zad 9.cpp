#include<iostream>

using namespace std;

znaczki(){
	int n;
	string s="",ss="", wy="";
	cout << "Podaj szerokoœæ podstawy: ";
	cin >> n;
	cout << "Podaj znak: ";
	cin >> s;
	
	int o = (int)(n/2);
	while(o>=0){
		int k = n-(o*2);
		for(int j=0;j<k;++j){
			ss +=s;
		}
		for(int j=0;j<o;++j){
			wy += " ";
		}
		cout << wy << ss << "\n";
		--o;
		ss="";
		wy="";
	}
}

main(){
	system("chcp 1250");
	system("CLS");

	znaczki();
}
