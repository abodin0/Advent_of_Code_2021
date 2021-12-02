#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    FILE* fd = fopen("input.txt", "r");
    int numberOfValue=0;
    int increaseCnt=0;
    int windowOne;
    int windowTwo;
    int windowThree;

    int sumFirstWindow=0;
    int sumSecondWindow=0;

    fscanf(fd, "%d", &windowOne);
    fscanf(fd, "%d", &windowTwo);
    fscanf(fd, "%d", &windowThree);

    sumFirstWindow = windowOne + windowTwo + windowThree;

    printf("valeur 1 : %d\n", windowOne);
    printf("valeur 2 : %d\n", windowTwo);
    printf("valeur 3 : %d\n", windowThree);
    printf("Somme fenetre : %d\n", sumFirstWindow);
    
    numberOfValue+=3;

    while(!feof(fd))
    {        
        windowOne = windowTwo;
        windowTwo = windowThree;
        fscanf(fd, "%d", &windowThree);

        numberOfValue+=1;

        printf("valeur 1 : %d\n", windowOne);
        printf("valeur 2 : %d\n", windowTwo);
        printf("valeur 3 : %d\n", windowThree);

        sumSecondWindow = windowOne + windowTwo + windowThree;
        printf("Somme fenetre : %d\n", sumSecondWindow);

        if(sumSecondWindow>sumFirstWindow)
            increaseCnt+=1;

        printf("Compteur = %d\n", increaseCnt);

        sumFirstWindow = sumSecondWindow;
    }

    fclose(fd);

    printf("Nombre de valeurs lues : %d\n", numberOfValue);

    return 0;
}