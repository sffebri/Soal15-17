#include <stdio.h>

/*Prosedure unutk ngeprint angka*/
void print(int n){
	int i, j, k; // iterasi untuk baris dan kolom

	/*pengulangan untuk segitika terbalik*/
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (i >= k)
			{
				printf("%d", k+1);
			}else{
			 printf(" ");	
			}
		}

		for (k = n-2; k >= 0; k--)
		{
			if (i >= k)
			{
				printf("%d", k+1);
			}else{
			 printf(" ");	
			}
		}

		printf("\n");
		
	}

	for (i = n-1; i > 0; i--)
	{
		for (k = 0; k < n; k++)
		{
			if (i <= k)
			{
				printf(" ");
			}else{
				printf("%d", k+1);
			}
		}

		for (k = n-2; k >= 0; k--)
		{
			if (i <= k)
			{
				printf(" ");
			}else{
				printf("%d", k+1);
			 	
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