#include <stdio.h>

/*Prosedure unutk ngeprint bintang-bintang*/
void print(int n){
	int i, j, k; // iterasi untuk baris dan kolom

	/*pengulangan untuk segitika terbalik*/
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
		{
			printf(" ");
		}
		for (j = 0; j < n-i; j++)
		{
			printf("*");
			if (j !=n-1-i){
				printf(" ");
			}
		}
		printf("\n");
	}

	/*Pengulangan untuk segitiga dibawahnya*/
	for (i = 1; i < n; i++){
		for (k = 0; k < n-i-1; k++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("*");
			if (j !=i){
				printf(" ");
			}
		}
		printf("\n");
	}
}


int main(){
	int n; // integer inputan
	scanf("%d", &n); // meminta user memasukan inputan

	print(n); // memanggil prosedure print

}