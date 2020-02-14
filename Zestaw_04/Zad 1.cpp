#include <iostream>
#include <vector>
#include <string>

using namespace std;

fun(vector <int> a, vector <int> b, int c){
	if(c == 1){
		vector<int> g;
		g.clear();
		for(int i=0;i<a.size();i++){
			for(int j=0;j<b.size();j++){
				if(a[i] == b[j]){
					g.push_back(a[i]);
					a.erase(a.begin()+i);
					b.erase(b.begin()+j);
					break;
					
				}
			}
		}
		
		string k="";
		for(int i=0;i<g.size();i++){
			cout << g[i] << " ";
		}
	}
	
	if(c == 2){
		string k="";
		for(int i=0;i<a.size();i++){
			cout << a[i] << " ";
		}
	}
	
	if(c == 3){
		vector<int> g;
		g.clear();
		for(int i=0;i<a.size();i++){
			bool p = true;
			for(int j=0;j<g.size();j++){
				if(g[j] == a[i]){
					p=false;
				}
			}
			if(p==true){
				g.push_back(a[i]);
			}
		}
		for(int i=0;i<b.size();i++){
			bool p = true;
			for(int j=0;j<g.size();j++){
				if(g[j] == b[i]){
					p=false;
				}
			}
			if(p==true){
				g.push_back(b[i]);
			}
		}
		
		string k="";
		for(int i=0;i<g.size();i++){
			cout << g[i] << " ";
		}
	}
}

main(){
	system("chcp 1250");
	system("CLS");
	
	cout << "Podaj parametr:\n1: czêœæ wspóln¹ obu tablic\n2: elementy które wystêpuj¹ tylko w tablicy a\n3: wszystkie elementy obu tablic bez powtórzeñ\n";
	int c = 0;
	cin >> c;
	int arr[] = {1,2,3,4,5,6,7,8,9,9};
	vector<int> a (arr, arr + sizeof(arr) / sizeof(arr[0]) );
	int arr2[] = {1,4,8,8,10,23,45};
	vector<int> b (arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]) );
	
	if(c == 1 or c == 2 or c == 3){
		fun(a, b, c);
	}
	else{
		cout << "Z³y znak!\n";
	}
	
}
