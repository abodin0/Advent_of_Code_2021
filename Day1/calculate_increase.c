#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    FILE* fd = fopen("input.txt", "r");
    int initialValue;
    int value;
    int numberOfValue=0;
    int increaseCnt=0;

    fscanf(fd, "%d", &initialValue);
    numberOfValue+=1;

    while(!feof(fd))
    {
        fscanf(fd, "%d", &value);
        printf("valeur 1 : %d\n", initialValue);
        printf("valeur 2 : %d\n", value);
        numberOfValue+=1;
        
        if(value > initialValue)
            increaseCnt+=1;

        printf("Compteur = %d\n", increaseCnt);

        initialValue = value;
    }

    fclose(fd);

    printf("Nombre de valeurs lues : %d\n", numberOfValue);

    return 0;
}