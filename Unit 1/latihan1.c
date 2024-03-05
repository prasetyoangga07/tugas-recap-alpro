#include<stdio.h>

/* Variabel s merepresentasikan Jarak, t untuk Waktu, dan v untuk Kecepatan. */

int main(){
    int s1,s2,t1,t2,v1,v2;
    scanf("%d %d", &s1, &t1);
    scanf("%d %d", &v1, &t2);
    scanf("%d %d", &s2, &v2);

    if(t1 == 0 || t2 == 0 || v2 == 0){
        printf("Pembagi tidak boleh nol.\n");
        return 1;
    }
    float v = (float) s1 / t1;
    float s = (float) v1 / t2;
    float t = (float) s2 / v2;

    printf("%.2f\n", v);
    printf("%.2f\n", s);
    printf("%.2f", t);

return 0;
}