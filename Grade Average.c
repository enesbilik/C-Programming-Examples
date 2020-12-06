#include <stdio.h>
/*
n tane öğrencinin 3 sınav ortalamasını hesaplayan
ve tablo şeklinde gösteren kodu yazınız.

*/
int main() {
    int n = 3, i, j, sum;
    float Class[n][4];

    for (i = 0; i < n; i++) {
        sum = 0;
        printf("%d. Ogrencinin notlarini giriniz(vize1,vize2,final): ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%f", &Class[i][j]);
            sum += Class[i][j];
        }
        Class[i][3] = sum / 3.;
    }
    //Sadece ortalamayı yazdırmak için
    for (i = 0; i < n; i++) {
        printf("\n%d.Ogrencinin ortalamasi:", i + 1);
        printf(" %.2f'dir", Class[i][3]);
    }
    printf("\n\n");

    //Tablo seklinde yazdırmak için
    for (i=0;i<n;i++){
        for (j=0;j<4;j++){
            printf("%.2f  ",Class[i][j]);
        }
        printf("\n");
    }

    return 0;
}
