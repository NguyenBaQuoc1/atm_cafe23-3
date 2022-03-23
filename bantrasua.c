#include <stdio.h>

int main(int argc, char const *argv[])
{
    int trasua = 20000 ;
    int cafe = 25000 ;
    int nuoccam = 20000 ;
    int sl , sum=0 , lc ;
    char  answer;

    do{
    printf("Cua Hang Chung Minh Co : \n");
    printf("1.Tra Sua : 20000$\n");
    printf("2.Cafe : 25000$\n");
    printf("3.Nuoc Cam : 20000$\n");
    printf(">Chon do uong theo thu tu da cho san ? \n");
    scanf("%d" , &lc);
    
    switch(lc){
        case 1 : 
                printf("Ban da chon Tra Sua : 20000d \n");
                printf("Vui Long Nhap So Luong\n");
                scanf("%d" , &sl );
                printf("Ban da mua %d coc Tra Sua\n" , sl);
                sum += trasua * sl ;
                break;
        case 2 :
                printf("Ban da con Cafe : 25000\n");
                printf("Vui Long Nhap So Luong\n" );
                scanf("%d" , &sl );
                printf("Ban da mua %d coc Cafe\n", sl);
                sum += cafe * sl ;
                break;
        case 3 : 
                printf("Ban da chon Nuoc Cam : 20000\n");
                printf("Vui Long Nhap So Luong\n");
                scanf("%d" , &sl );
                printf("Ban da mua %d coc Nuoc Cam\n" , sl);
                sum += nuoccam*sl;
                break;                      
        }
        printf("Ban muon tiep tuc chon do uong khong Y/N?\n");
        fflush(stdin);
        scanf("%c" , &answer);
    }while(answer == 'Y' || answer == 'y');
    printf("Cua ban het %d\n" , sum);
    printf("Cam on ban da ung ho nha <3"); 
}
