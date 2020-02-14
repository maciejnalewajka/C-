#include <iostream>
#include <string>

using namespace std;


fun(string a){
	int z[123] = {};
	int i=0;
	while(a[i])
        {
                ++z[a[i]];
                ++i;
        }
        
    for(int i=97;i<123;i++){
    	if(z[i]>0){
    		cout << (char)i << " - " << z[i] << "\n";
		}
	}               
    for(int i=65;i<91;i++){
    	if(z[i]>0){
    		cout << (char)i << " - "<< z[i] << "\n"; 
		}
	}
}


main(){
	system("chcp 1250");
	system("CLS");
	
	string a = "Ala ma kota a kot ma ale";
	fun(a);
}
