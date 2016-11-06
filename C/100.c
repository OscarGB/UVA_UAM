/*Aceptado, tiempo de 0.310*/

#include <stdio.h>

int main(){
	int min, max, ops, maxops;
	int aux;
	int i;

	while(scanf("%d %d", &min, &max) == 2){
		maxops = 0;
		if(min < max){
			for(i = min; i <= max; i++){
				ops = 0;
				aux = i;
				while(aux != 1){
					if(aux % 2){
						aux = (3 * aux) + 1;
					}else{
						aux = aux/2;
					}
					ops++;
				}
				ops++;
				if(ops > maxops){
					maxops = ops;
				}
			}
			printf("%d %d %d\n", min, max, maxops);
		}else{
			aux = max;
			max = min;
			min = aux;
			for(i = min; i <= max; i++){
				ops = 0;
				aux = i;
				while(aux != 1){
					if(aux % 2){
						aux = (3 * aux) + 1;
					}else{
						aux = aux/2;
					}
					ops++;
				}
				ops++;
				if(ops > maxops){
					maxops = ops;
				}
			}
			printf("%d %d %d\n", max, min, maxops);
		}
	}

	return 0;
}