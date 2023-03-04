#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void place()
{
    int city;
    system("color 1e");
    printf("\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");
    printf("HELLO! WELCOME TO CINEHUB.\n\n");
    printf("Choose your city:\n");
    printf("\n#1. Jammu\n#2. Chandigarh\n#3. Delhi\n");
    printf("\nCity:\t");
    scanf("%d", &city);
    if (city == 1 || city == 2 || city == 3)
    {
        center();
    }
    else
    {
        printf("X WRONG OPTION X");
    }
}

void center()
{
    int theater;
    system("color 2b");
    printf("\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");
    printf("Choose the theater\t\n");
    printf("\n#1. Wave Cinema\n#2. PVR:KC\n#3. Movietime\n#4. Back\n");
    printf("\nTheater:\t");
    scanf("%d", &theater);
    if (theater == 4)
    {
        place();
    }
    else
    {
        movie();
    }
}
