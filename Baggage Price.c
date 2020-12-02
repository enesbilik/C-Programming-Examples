/*
Bir hava yolu şirketi yolcuları için bagaj sınırlaması uygulamaktadır. 
Her yolcunun el için 8, normal için 15 kg bagaj hakkı bulunmakta. 
Eğer yolcular el haklarını geçerse kg başına 4 TL, normal haklarını geçerse 
kg başına 5 tl ödeme yapmak durumundadır. Buna göre klavyeden el ve normal bagajlarının 
kg olarak ağırlığını giren yolcunun ödemesi gereken bagaj ücretini hesaplayan kod ?
*/

#include <stdio.h>
int main() {
    int elHak = 8, normalHak = 15;
    int el, normal, elUcret, normalUcret;

    printf("El ve bagaj agirligini giriniz:");
    scanf("%d %d", &el, &normal);

    elUcret = (el - elHak) * 4 > 0 ? (el - elHak) * 4 : 0;
    normalUcret = (normal - normalHak) * 5 > 0 ? (normal - normalHak) * 5 : 0;

    printf("Odemeniz gerken toplam ucret %d TL'dir.", elUcret + normalUcret);

    return 0;
}
