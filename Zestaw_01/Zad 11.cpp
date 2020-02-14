#include <iostream>
#include <cstdlib>

using namespace std;

losowanie(){
	int n=0, par=0, npar=0, najw=0, najm=0;
	for(int i=1;i<101;++i){
		n = rand();
		if(i == 1){
			najw = n;
			najm = n;
		}
		if((n%2) == 0){
			par += n;
		}
		if((n%2) != 0){
			npar += n;
		}
		if(n>najw){
			najw = n;
		}
		if(n<najm){
			najm = n;
		}
	}
	
	cout << "Najwiêksza wartoœæ to " << najw << ", najmniejsza wartoœæ to " << najm << ", suma wszystkich liczb parzystych to " << par << ", nieparzystych to " << npar;
}

main(){
	system("chcp 1250");
	system("CLS");

	losowanie();
}
