#include <stdio.h>

int sum(a){
	if(a == 0){
		return 1;
	}
	return a + sum(a-1);
}


int main(){
	int nbuses;
	int i;
	int top, bot;


	scanf("%d", &nbuses);

	for( i = 0; i < nbuses; i++){
		scanf("%d %d", &top, &bot);
		printf("%d\n", (sum(top+bot) + top));
	}
	return 0;
}
