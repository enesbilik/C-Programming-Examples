/* 
n = 5
?***?
*?*?*
**?**
*?*?*
?***?
*/

#include <stdio.h>

int main() {
	
	int i,j,n;
	char f='?',s='*';
	
	printf("n:");
	scanf("%d",&n);
	
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++)  {
			if(i==j || i+j == n-1){
				printf("%c",f);
			}
			else printf("%c",s);
		}
		printf("\n");
	}
	
	return 0;
}
