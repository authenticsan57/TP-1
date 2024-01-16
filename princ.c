#include"pi.h"
#include<stdio.h>
int main()
{
    float rayon;
    printf("Rayon ?)\n");
    scanf("%f", &rayon);
    printf("La surface = %f, La circonference = %f", surface(rayon), circonference(rayon));
}