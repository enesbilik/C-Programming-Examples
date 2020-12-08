/*
 * Kullanıcının girdiği yılın artık yıl olup olmadığını söyleyen C/Python kodu yazınız.

1) Eğer bir yılın son iki rakamı "00" değilse ve bu sayı 4 e tam bölünebiliyorsa bu yıl artık yıldır.
Örnek: 2008 yılı artık yıldır.Son iki rakamı "00" değildir ve 4 e bölünebilen bir sayıdır.

2) Eğer bir yılın son iki rakamı "00" ise bu sayının 400 e tam bölünmesi durumunda yine bu yıl yine artık yıldır.
Örnek: 2000 yılı artık yıldır.Son iki rakamı "00" ve 400 e bölünebilen bir sayıdır.
 */

#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);

    if ((num % 100 != 0 && num % 4 == 0) || num % 400 == 0)
        printf("%d yili artik yildir", num);

    else
        printf("%d yili artik yil degildir\n", num);

    return 0;
}
