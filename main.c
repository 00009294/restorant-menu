#include <stdio.h>

int main(){
    int index;
    char yesNo;
    double portsiya,jami=0;


    printf("Milliy Taomlar\n");
    printf("Menu:\tIndexKodi\tNarhi\n");
    printf("Osh\t\t\t1\t\t18000 so'm\n");
    printf("Shorva\t\t2\t\t14000 so'm\n");
    printf("Lagmmon\t\t3\t\t15000 so'm\n");
    printf("Chuchvara\t4\t\t16000 so'm\n");
    printf("Bishteks\t5\t\t14000 so'm\n");
    printf("Mastava\t\t6\t\t13000 so'm\n");
    printf("Bistrogen\t7\t\t12000 so'm\n");
    printf("Choy\t\t8\t\t2000  so'm\n");
    printf("Salat\t\t9\t\t5000  so'm\n");
    Menu:
    printf("To'g'ri Idexni Tanlang(Chiqish uchun [-1]): ");
    scanf(" %d", &index);

    if(index == -1){
        goto chiqish;
    }

    switch (index) {
        case 1:
            printf("Necha Portsiya Zakas Qilasiz: ");
            scanf(" %lf", &portsiya);
            if(portsiya < 0){
                printf("Iltimos Portsiyani To'g'ri Kiriting!!!\a");
                break;
            }
                jami = jami + (portsiya * 18000);
                printf("Jami: %.2lf portsiyani narxi %.0lf so'm bo'ladi.",portsiya, portsiya*18000);
            break;
        case 2:
            printf("Necha Portsiya Zakas Qilasiz: ");
            scanf(" %lf", &portsiya);
            if(portsiya < 0){
                printf("Iltimos Portsiyani To'g'ri Kiriting!!!\a");
                break;
            }
            jami += portsiya * 14000;
            printf("Jami: %.2lf portsiyani narxi %.0lf so'm bo'ladi.",portsiya, portsiya*14000);
            break;
        case 3:
            printf("Necha Portsiya Zakas Qilasiz: ");
            scanf(" %lf", &portsiya);
            if(portsiya < 0){
                printf("Iltimos Portsiyani To'g'ri Kiriting!!!\a");
                break;
            }
            jami += portsiya * 15000;
            printf("Jami: %.2lf portsiyani narxi %.0lf so'm bo'ladi.",portsiya, portsiya*15000);
            break;
        case 4:
            printf("Necha Portsiya Zakas Qilasiz: ");
            scanf(" %lf", &portsiya);
            if(portsiya < 0){
                printf("Iltimos Portsiyani To'g'ri Kiriting!!!\a");
                break;
            }
            jami += portsiya * 16000;
            printf("Jami: %.2lf portsiyani narxi %.0lf so'm bo'ladi.",portsiya, portsiya*16000);
            break;
        case 5:
            printf("Necha Portsiya Zakas Qilasiz: ");
            scanf(" %lf", &portsiya);
            if(portsiya < 0){
                printf("Iltimos Portsiyani To'g'ri Kiriting!!!\a");
                break;
            }
            jami += portsiya * 14000;
            printf("Jami: %.2lf portsiyani narxi %.0lf so'm bo'ladi.",portsiya, portsiya*14000);
            break;
        case 6:
            printf("Necha Portsiya Zakas Qilasiz: ");
            scanf(" %lf", &portsiya);
            if(portsiya < 0){
                printf("Iltimos Portsiyani To'g'ri Kiriting!!!\a");
                break;
            }
            jami += portsiya * 13000;
            printf("Jami: %.2lf portsiyani narxi %.0lf so'm bo'ladi.",portsiya, portsiya*13000);
            break;
        case 7:
            printf("Necha Portsiya Zakas Qilasiz: ");
            scanf(" %lf", &portsiya);
            if(portsiya < 0){
                printf("Iltimos Portsiyani To'g'ri Kiriting!!!\a");
                break;
            }
            jami += portsiya * 12000;
            printf("Jami: %.2lf portsiyani narxi %.0lf so'm bo'ladi.",portsiya, portsiya*12000);
            break;
        case 8:
            printf("Necha Portsiya Zakas Qilasiz: ");
            scanf(" %lf", &portsiya);
            if(portsiya < 0){
                printf("Iltimos Portsiyani To'g'ri Kiriting!!!\a");
                break;
            }
            jami += portsiya * 2000;
            printf("Jami: %.2lf portsiyani narxi %.0lf so'm bo'ladi.",portsiya, portsiya*2000);
            break;
        case 9:
            printf("Necha Portsiya Zakas Qilasiz: ");
            scanf(" %lf", &portsiya);
            if(portsiya < 0){
                printf("Iltimos Portsiyani To'g'ri Kiriting!!!\a");
                break;
            }
            jami += portsiya * 5000;
            printf("Jami: %.2lf portsiyani narxi %.0lf so'm bo'ladi.",portsiya, portsiya*5000);
            break;
        default:
            printf("Faqat Menuda Bor Taomni Zakas Qila Olasiz!!!\a");
            break;
    }

    printf("\nYana Zakas Amalga Oshirasmi? [+/-] ");
    yesNO:
    scanf(" %c", &yesNo);
    switch (yesNo) {
        case '+':
            goto Menu;
        case '-':
            goto chiqish;
        default:
            printf("Faqat +/- ni Kirita Olasiz!!!\a");
            goto yesNO;
    }

        chiqish:
    printf("Jami: %.2lf so'm\n", jami);
    printf("Sizni Yana Kutib Qolamiz!!!\n");
    return 0;
}