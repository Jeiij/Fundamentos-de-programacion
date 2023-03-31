#include <stdio.h>
#include <ctype.h>
#include<string.h>


void main() {
    int i, j, ganador, prm, prc, rounds = 12, jueces = 3, caidas_m = 0, caidas_c = 0, pjm1 = 0, pjc1 = 0,
            pjm2 = 0, pjc2 = 0, pjm3 = 0, pjc3 = 0, gsj1, pgsj1, ppsj1, psj1,
            gsj2, pgsj2, psj2, ppsj2, gsj3, pgsj3, psj3, ppsj3,
            max_points, min_points, j_max_points, j_min_points, ganadordecision,crgm = 0, crgc = 0;

    for (i = 1; i <= rounds; i++) {
        int crgpjm = 0, crgpjc = 0;
        for (j = 1; j <= jueces; j++) {
            printf("\nquien gano este raund 1 M - 2 C");
            scanf("%d", &ganador);

            if (ganador == 1) {
                prm = 10;
                prc = 9;
                crgpjm += 1;
            } else {
                prm = 9;
                prc = 10;
                crgpjc += 1;
            }

            printf("cuantas veces se cayo m");
            scanf("%d", &caidas_m);

            printf("cuantas veces se cayo c");
            scanf("%d", &caidas_c);

            if (j == 1) {
                pjm1 += prm - ((caidas_m > 0) ? 2 : 0);
                pjc1 += prc - ((caidas_c > 0) ? 2 : 0);
            }
            if (j == 2) {
                pjm2 += prm - ((caidas_m > 0) ? 2 : 0);
                pjc2 += prc - ((caidas_c > 0) ? 2 : 0);
            }
            if (j == 3) {
                pjm3 += prm - ((caidas_m > 0) ? 2 : 0);
                pjc3 += prc - ((caidas_c > 0) ? 2 : 0);
            }

        }

        if (crgpjm > crgpjc) {
            crgm += 1;
        } else {
            crgc += 1;
        }

    }
    printf("\nbatallas ganadas de maywheter: %d ballatas ganadas de canelo: %d", crgm,
           crgc);// cantidad de batallas ganadas por cada particpante y perdidas

    if (pjm1 > pjc1) {
        gsj1 = 1;
        pgsj1 = pjm1;
        psj1 = 2;
        ppsj1 = pjc1;
    } else {
        gsj1 = 2;
        pgsj1 = pjm1;
        psj1 = 1;
        ppsj1 = pjc1;
    }
    printf("\njuez 1 puntuacion final ganador: %d %d puntuacion final perdedor: %d %d", gsj1, pgsj1, psj1, ppsj1);

    if (pjm2 > pjc2) {
        gsj2 = 1;
        pgsj2 = pjm2;
        psj2 = 2;
        ppsj2 = pjc2;
    } else {
        gsj2 = 2;
        pgsj2 = pjm2;
        psj2 = 1;
        ppsj2 = pjc2;
    }
    printf("\njuez 2 puntuacion final ganador: %d %d puntuacion final perdedor: %d %d", gsj2, pgsj2, psj2, ppsj2);

    if (pjm3 > pjc3) {
        gsj3 = 1;
        pgsj3 = pjm3;
        psj3 = 2;
        ppsj3 = pjc3;
    } else {
        gsj3 = 2;
        pgsj3 = pjm3;
        psj3 = 1;
        ppsj3 = pjc3;
    }
    printf("\njuez 3 puntuacion final ganador: %d %d puntuacion final perdedor: %d %d", gsj3, pgsj3, psj3, ppsj3);


    if (pgsj1 >= pgsj2 && pgsj1 >= pgsj3) {
        max_points = pgsj1;
        j_max_points = 1;

    } else if (pgsj2 > pgsj1 && pgsj2 > pgsj3) {
        max_points = pgsj2;
        j_max_points = 2;

    } else {
        max_points = pgsj3;
        j_max_points = 3;
    }
    printf("\n la tarjeta con mayor puntuacion la tiene el juez %d y la puntuacion es %d", j_max_points, max_points);

    if (ppsj1 <= ppsj2 && ppsj1 <= ppsj3) {
        min_points = ppsj1;
        j_min_points = 1;

    } else if (ppsj2 > ppsj1 && ppsj2 > ppsj3) {
        min_points = ppsj2;
        j_min_points = 2;

    } else {
        min_points = ppsj3;
        j_min_points = 3;
    }
    printf("\n la tarjeta con menor puntuacion la tiene el juez %d y la puntuacion es %d", j_min_points, min_points);

    if (gsj1 == gsj2 == gsj3) {
        ganadordecision = gsj1;
        printf("\n el tipo de victoria obtenida es unanime");
        printf("\nel ganador %d ganadorn obtiene %f y el perdedor obtine %f",ganadordecision,100000+((100000*0.10)*12),(100000*0.40));

    } else if ((gsj1 == gsj2 && pgsj3 == ppsj3) || (gsj1 == gsj3 && pgsj2 == ppsj2) ||
               (gsj2 == gsj3 && pgsj1 == ppsj1)) {
        printf("\n el tipo de victoria obtenida es md");
        printf("\nel ganador %d obtiene %f y el perdedor obtine %f",ganadordecision,100000+((100000*0.15)*12),(100000*0.40));
    } else if ((gsj1 == gsj2 && gsj1 != gsj3)) {
        ganadordecision = gsj1;
        printf("\n el tipo de victoria obtenida es sd");
        printf("\nel ganador  %d obtiene %f y el perdedor obtine %f",ganadordecision,100000+((100000*0.05)*12),(100000*0.40));
    } else if (gsj1 == gsj3 && gsj1 != gsj2) {
        ganadordecision = gsj1;
        printf("\n el tipo de victoria obtenida es sd");
        printf("\nel ganador %d obtiene %f y el perdedor obtine %f",ganadordecision,100000+((100000*0.05)*12),(100000*0.40));
    } else if ((gsj2 == gsj3 && gsj2 != gsj1)) {
        ganadordecision = gsj2;
        printf("\n el tipo de victoria obtenida es sd");
        printf("\nel ganador %d obtiene %f y el perdedor obtine %f",ganadordecision,100000+((100000*0.05)*12),(100000*0.40));
    }


    }