#include <stdio.h>
int main(){
	int n; // integer inputan
	char c[100];

	n = -1;
	while(c[n] != '.'){
		n++;
		scanf(" %c", &c[n]);
		
	}

	c[n] = '\0';

	int i;

	for (i = 0; i < n; i++){
		printf("%c", c[i]);
	}

	for (i = n-2; i >= 0; i--){
		printf("%c", c[i]);
	}

}