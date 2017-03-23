#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, cont=0, casos;
	scanf("%d", &casos);
	while(casos--){
		cont = 0;
		scanf("%d %d", &a, &b);
		while(a!=b){
			if(a > b)
				a/=2;
			else
				b/=2;
			cont++;
	}
  	printf("%d\n", cont);
  }
  return 0;
}