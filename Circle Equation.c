#include <stdio.h>
#include <math.h>

// Girilen bir noktanın cemberin üzerinde mi içinde mi dışında mı oldugunu söyleyen kod

int main() {
	float x,y,uzaklik;
	
	printf("x ve y degerlerini birer bosluk birakarak giriniz:\n");
	scanf("%f %f",&x,&y);
	
	uzaklik = pow(pow(x-2,2) + pow(y-1,2),0.5);
	
	if (uzaklik < 1) printf("%.2f Noktasi cemberin icindedir",uzaklik);
	
	else if (uzaklik == 1) printf("%.2f Noktasi cemberin ustundedir",uzaklik);
	
	else printf("%.2f Noktasi cemberin disindadir",uzaklik);	
	
	return 0;
}
