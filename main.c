#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char user [20];
    int pin, jmlh;
    int menu2,trans,lihat,bayar,ganti,sisa;
    int saldo = 10000000;
    char input = ('y','Y','n','N');


        printf("Masukkan Username\t\t: ");
        scanf("%s",&user);
        printf("Masukkan PIN (wajib angka)\t: ");
        scanf("%d",&pin);

        if(pin == 123456)
        {
            system("cls");
            goto menu2;
        }
        else
        {
            printf("PIN anda salah");
            return 0;
        }

    menu2:
        printf(" ======== Selamat Datang di ATM ========\n");
    printf("Menu :");
    printf("\n1. Transfer");
    printf("\n2. Lihat Saldo");
    printf("\n3. Bayar Tagihan");
    printf("\n4. Ganti PIN");
    printf("\nMasukkan Pilihan\t: ");
    scanf("%d",&menu2);
    system("cls");

     switch (menu2){
    case 1: printf("--------Transfer--------\n");
        printf("1. Ke Sesama ATM\n");
        printf("2. Ke ATM Lain\n");
        printf("Masukkan Pilihan\t: ");
        scanf("%d",&trans);
            if(trans==1){
                printf("Jumlah Uang yang ditransfer: Rp");
                scanf("%d",&jmlh);
                sisa = saldo - jmlh;
                printf("Uang dengan Saldo Rp%d sudah ditransfer\n",jmlh);
                printf("Sisa Saldo anda ialah : Rp%d\n", sisa);
                printf("\n\nApakah anda mau melanjutkan : ");
                scanf("%s",&input);
                    if (input == 'y' || input == 'Y')
                    {
                        system("cls");
                        goto menu2;
                    }
                    else
                    {
                        return 0;
                    }
                }
            else if(trans==2){
                printf("Jumlah Uang yang diTransfer: Rp ");
                scanf("%d",&jmlh);
                sisa = saldo - (jmlh + 5000);
                printf("Uang dengan Saldo Rp%d sudah ditransfer\n",jmlh);
                printf("Sisa Saldo anda ialah : Rp%d\n", sisa);
                printf("\n\nApakah anda mau melanjutkan : ");
                scanf("%s",&input);
                    if (input == 'y' || input == 'Y')
                    {
                        system("cls");
                        goto menu2;
                    }
                    else
                    {
                        return 0;
                    }
                }
    break;

    case 2: printf("--------Lihat Saldo--------\n");
                printf("Sisa Saldo anda ialah : Rp%d\n", saldo);
                printf("\n\nApakah anda mau melanjutkan : ");
                scanf("%s",&input);
                    if (input == 'y' || input == 'Y')
                    {
                        system("cls");
                        goto menu2;
                    }
                    else
                    {
                        return 0;
                    }
    break;

    case 3: printf("--------Bayar Tagihan--------\n");
        printf("1. Listrik\n");
        printf("2. PDAM\n");
        printf("Masukkan Pilihan\t: ");
        scanf("%d",&bayar);
        system("cls");
            if(bayar==1){
                printf("Jumlah Uang Pembayaran Tagihan Listrik: Rp");
                scanf("%d",&jmlh);
                sisa = saldo - jmlh;
                printf("Uang dengan Saldo %d sudah dibayarkan\n",jmlh);
                printf("Sisa Saldo anda ialah : %d\n", sisa);
                printf("\n\nApakah anda mau melanjutkan : ");
                scanf("%s",&input);
                    if (input == 'y' || input == 'Y')
                    {
                        system("cls");
                        goto menu2;
                    }
                    else
                    {
                        return 0;
                    }
                }
            else if(bayar==2){
                printf("Jumlah Uang Pembayaran Tagihan PDAM: Rp");
                scanf("%d",&jmlh);
                sisa = saldo - jmlh;
                printf("Uang dengan Saldo %d sudah dibayarkan\n",jmlh);
                printf("Sisa Saldo anda ialah : Rp%d\n", sisa);
                printf("\n\nApakah anda mau melanjutkan : ");
                scanf("%s",&input);
                    if (input == 'y' || input == 'Y')
                    {
                        system("cls");
                        goto menu2;
                    }
                    else
                    {
                        return 0;
                    }
                }
    break;

     case 4: printf("--------Ganti PIN--------\n");
                printf("Maaf Belum pandai ngeganti PIN-nya\n");
                printf("\thehehehehehehe\t\t");
                printf("\n\nApakah anda mau melanjutkan : ");
                scanf("%s",&input);
                    if (input == 'y' || input == 'Y')
                    {
                        system("cls");
                        goto menu2;
                    }
                    else
                    {
                        return 0;
                    }
    break;
    default : printf("Pilihan tidak ada \n");
    }
return 0;
}
