/*
n = 4 için şekildeki gibi çıktı veren kod
          1    
       2     3    
    4     5     6    
 7     8     9    10  

*/

#include <stdio.h>
int main() {
	
	int i,j,n;
	int sayi = 1;
	
	printf("satir sayisi giriniz: ");
	scanf("%d",&n);
	int b = n-1;
	
	for (i=1; i<=n; i++) {
		
		for (j=0; j<b; j++) 
			printf("   ");
		
		for (j=0; j<i; j++,sayi++)
			printf("%2d    ",sayi);
			
		b--;
		printf("\n");
	}
		
	return 0;
}
