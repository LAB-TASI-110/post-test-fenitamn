#include <stdio.h>

int main() {

    int N;
    int kode[100];
    int stok[100];
    int i;
    int cari;
    int total = 0;

    printf("Masukkan jumlah data: ");
    scanf("%d",&N);

    printf("\nKode Kategori:\n");
    printf("1 = Minyak\n");
    printf("2 = Rok Pramuka\n");
    printf("3 = Gula\n");
    printf("4 = Dasi SD\n\n");

    for(i=0;i<N;i++)
    {
        printf("Data ke-%d\n",i+1);

        printf("Kode kategori: ");
        scanf("%d",&kode[i]);

        printf("Jumlah stok (pcs): ");
        scanf("%d",&stok[i]);

        printf("\n");
    }

    printf("Masukkan kode kategori yang ingin ditampilkan: ");
    scanf("%d",&cari);

    for(i=0;i<N;i++)
    {
        if(kode[i]==cari)
        {
            total = total + stok[i];
        }
    }

    printf("\n=========================\n");
    printf("| Kategori | Total Stok |\n");
    printf("=========================\n");

    if(cari==1)
    printf("| Minyak   | %d pcs     |\n",total);

    else if(cari==2)
    printf("| Rok Pramuka | %d pcs |\n",total);

    else if(cari==3)
    printf("| Gula     | %d pcs     |\n",total);

    else if(cari==4)
    printf("| Dasi SD  | %d pcs     |\n",total);

    printf("=========================\n");

    return 0;
}