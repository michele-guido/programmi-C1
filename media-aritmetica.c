#include <stdio.h>
int main()

{
    float a , b ,  media;

    printf("\ninserisci il primo numero:");
    scanf("%f" ,&a);
    
    printf("\ninserisci il secondo numero:");
    scanf("%f", &b);


    media = ( a + b )/2;
    printf("la media è: %f", media );

}
