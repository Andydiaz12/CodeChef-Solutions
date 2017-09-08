#include <map>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(){

	map <int, int> cadena;
	string valores;
	vector <int> lista;
	int tc, i, sz, manzanas, numero;
	
	scanf("%d", &tc);
	
	while(tc--){
		cadena.clear();
		lista.clear();
		
		scanf("%d", &manzanas);
		for(i = 0 ; i < manzanas ; i++){
			scanf("%d", &numero);
			if(!cadena[numero]){
				cadena[numero]++;
				lista.push_back(cadena[numero]);
			}
		}
		sz = lista.size();
		printf("%d\n", sz);
	}
	
	
	return 0;
}
