/*
Lutfen satir sayisi giriniz: 6

                               1
                           1       1
                       1       2       1
                   1       3       3       1
               1       4       6       4       1
           1       5      10      10       5       1


*/

#include <stdio.h>

double fact(int n);
double comb(int n, int r);

int main(){
	int i, j, last;
	printf("Lutfen satir sayisi giriniz: \n");
	scanf("%i",&last);
	int space = last--;
	
	for (i=0; i<=last; i++){
		
		for (j=0; j<space; j++)
			printf("    ");
		
		for (j=0; j<=i; j++){
			printf("%8.0f",comb(i,j));
		}
		printf("\n");
		space--;
	}	
	
	
	return 0;
}


double fact(int n){
	double result = 1, i;
	
	for (i=1; i<=n; i++)
		result *= i;
	
	return result;
}

double comb(int n, int r){
	return fact(n) / (fact(r) * fact(n-r));	
}

	
