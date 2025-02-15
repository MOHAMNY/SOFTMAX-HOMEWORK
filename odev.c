#include <stdio.h>
#include <math.h>

#define MAHALLE_SAYISI 3
#define KRITER_SAYISI 5

void softmax(float girdi[], float cikti[], int uzunluk) {
    float maksimum = girdi[0];
    for (int i = 1; i < uzunluk; i++) {
        if (girdi[i] > maksimum) {
            maksimum = girdi[i];
        }
    }

    float toplam = 0.0;
    for (int i = 0; i < uzunluk; i++) {
        cikti[i] = exp(girdi[i] - maksimum);
        toplam += cikti[i];
    }

    for (int i = 0; i < uzunluk; i++) {
        cikti[i] /= toplam;
    }
}

int main() {
    float kriterler[MAHALLE_SAYISI][KRITER_SAYISI] = {
        {8.5, 7.0, 6.0, 5.5, 9.0},
        {7.0, 8.0, 7.5, 6.0, 8.5}, 
        {9.0, 6.5, 5.0, 7.0, 7.5}
    };

    float agirliklar[KRITER_SAYISI] = {0.3, 0.2, 0.2, 0.15, 0.15};

    float puanlar[MAHALLE_SAYISI] = {0};
    for (int i = 0; i < MAHALLE_SAYISI; i++) {
        for (int j = 0; j < KRITER_SAYISI; j++) {
            puanlar[i] += kriterler[i][j] * agirliklar[j];
        }
    }

    float softmax_puanlar[MAHALLE_SAYISI];
    softmax(puanlar, softmax_puanlar, MAHALLE_SAYISI);

    printf("Softmax Puanlari:\n");
    for (int i = 0; i < MAHALLE_SAYISI; i++) {
        printf("Mahalle %d: %.2f\n", i + 1, softmax_puanlar[i]);
    }

    int en_iyi_mahalle = 0;
    for (int i = 1; i < MAHALLE_SAYISI; i++) {
        if (softmax_puanlar[i] > softmax_puanlar[en_iyi_mahalle]) {
            en_iyi_mahalle = i;
        }
    }
    printf("\nYeni toplu tasima hatti icin en uygun mahalle: Mahalle %d (Puan: %.2f)\n", en_iyi_mahalle + 1, softmax_puanlar[en_iyi_mahalle]);

    return 0;
}