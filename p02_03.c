#include <stdio.h>

int main(){

    int kategori, pilihan, jumlah;
    int harga, total = 0;
    char tambah;
    float diskon = 0, bayar;

    printf("=== KAFETARIA IT DEL ===\n");

    do{

        harga = 0;

        printf("\nKategori Menu\n");
        printf("1. Minuman\n");
        printf("2. Makanan\n");
        printf("3. Makanan + Minuman\n");
        printf("Pilih kategori: ");
        scanf("%d",&kategori);

        if(kategori == 1 || kategori == 3){

            printf("\n--- Menu Minuman ---\n");
            printf("1 Jus Naga (8000)\n");
            printf("2 Kopi Sanger (16000)\n");
            printf("3 Kopi Aren (15000)\n");
            printf("4 Kopi Enak (100000)\n");
            printf("5 Kopi Del Shop (120000)\n");
            printf("6 Kopi KL (5000)\n");
            printf("7 Jus Pir (8000)\n");

            printf("Pilih minuman: ");
            scanf("%d",&pilihan);

            if(pilihan==1) harga=8000;
            else if(pilihan==2) harga=16000;
            else if(pilihan==3) harga=15000;
            else if(pilihan==4) harga=100000;
            else if(pilihan==5) harga=120000;
            else if(pilihan==6) harga=5000;
            else if(pilihan==7) harga=8000;

            printf("Jumlah: ");
            scanf("%d",&jumlah);

            total += harga * jumlah;
        }

        if(kategori == 2 || kategori == 3){

            printf("\n--- Menu Makanan ---\n");
            printf("1 Batagor (5000)\n");
            printf("2 Roti Isi Ayam (15000)\n");
            printf("3 Gabin (10000)\n");
            printf("4 Nugget (15000)\n");
            printf("5 Ubi Crispy (10000)\n");
            printf("6 Tela Tela (10000)\n");
            printf("7 Piscok (10000)\n");

            printf("Pilih makanan: ");
            scanf("%d",&pilihan);

            if(pilihan==1) harga=5000;
            else if(pilihan==2) harga=15000;
            else if(pilihan==3) harga=10000;
            else if(pilihan==4) harga=15000;
            else if(pilihan==5) harga=10000;
            else if(pilihan==6) harga=10000;
            else if(pilihan==7) harga=10000;

            printf("Jumlah: ");
            scanf("%d",&jumlah);

            total += harga * jumlah;
        }

        printf("\nAda pesanan tambahan? (y/t): ");
        scanf(" %c",&tambah);

    }while(tambah=='y' || tambah=='Y');


    printf("\nTotal belanja: %d\n", total);

    if(total >= 40000){
        diskon = 0.40;
        printf("Yey, anda dapat potongan harga nich\n");
    }
    else if(total >= 30000){
        diskon = 0.20;
        printf("Yey, anda dapat potongan harga nich\n");
    }
    else{
        printf("Tambah lagi dong biar dapat diskon\n");
    }

    bayar = total - total*diskon;

    printf("Total bayar: %.0f\n", bayar);
    printf("Terimakasih telah berbelanja di Kafetaria IT Del\n");

}