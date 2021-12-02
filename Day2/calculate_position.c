#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    FILE* fd = fopen("input.txt", "r");
    char action[10];
    int value;
    int numberOfValue=0;
    int horizontalPosition=0;
    int depth=0;

    //fscanf(fd, "%s", &action);
    fgets
    fscanf(fd, "%d", &value);
    numberOfValue+=1;

    printf("action : %s\n", action);
    printf("valeur : %d\n", value);

    while(!feof(fd))
    {   
        fscanf(fd, "%s", &action);
        fscanf(fd, "%d", &value);
        
        printf("action : %s\n", action);
        printf("valeur : %d\n", value);
        numberOfValue+=1;
    }

    fclose(fd);

    printf("Nombre de valeurs lues : %d\n", numberOfValue);

    return 0;
}