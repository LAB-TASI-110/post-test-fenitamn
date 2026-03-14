#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];

    while (1) {

        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;           //ini fungsinya ini mmebuta perulangan dan apabila si user ketik end dia akan berakhir dan jika selain N program akan berlanjut.
                             // selain end maksudnya ,yaitu jika di lanjut dengan kode kota sesuai dengan sitem bahasa c yang telah dibuat .
        }

        float beratButet;
        scanf("%f", &beratButet);

        float beratUcok = 1.5 * beratButet;
        float totalBerat = beratButet + beratUcok;

        int tarif;
        char kota[20];
        char keterangan[20];

        if (strcmp(kode, "MDN") == 0) {
            tarif = 8000;
            strcpy(kota, "Medan");
            strcpy(keterangan, "Dalam Pulau");
        }
        else if (strcmp(kode, "BLG") == 0) {
            tarif = 5000;
            strcpy(kota, "Balige");
            strcpy(keterangan, "Dalam Pulau");
        }
        else if (strcmp(kode, "JKT") == 0) {
            tarif = 12000;
            strcpy(kota, "Jakarta");
            strcpy(keterangan, "Luar Pulau");
        }
        else if (strcmp(kode, "SBY") == 0) {
            tarif = 13000;
            strcpy(kota, "Surabaya");
            strcpy(keterangan, "Luar Pulau");
        }
        else {
            printf("Kode kota tidak valid\n");
            continue;
        }

        float ongkir = tarif * totalBerat;
        float diskon = 0;

        if (totalBerat > 10) {
            diskon = 0.10 * ongkir;
        }

        float totalBayar = ongkir - diskon;

        printf("\n===== STRUK PEMBAYARAN =====\n");
        printf("Kota tujuan : %s\n", kota);
        printf("Berat Butet : %.2f kg\n", beratButet);
        printf("Berat Ucok  : %.2f kg\n", beratUcok);
        printf("Total berat : %.2f kg\n", totalBerat);
        printf("Total ongkir: Rp %.0f\n", ongkir);

        if (diskon > 0) {
            printf("Diskon 10%%  : Rp %.0f\n", diskon);
        }

        printf("Total bayar : Rp %.0f\n", totalBayar);

        if (strcmp(keterangan, "Luar Pulau") == 0) {
            printf("Promo       : Asuransi Gratis\n");
        }

        if (totalBerat > 10) {
            printf("Promo       : Diskon Ongkir 10%%\n");
        }

        printf("============================\n\n");
    }

    return 0;
}