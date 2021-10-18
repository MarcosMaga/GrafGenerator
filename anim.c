#include <stdio.h>
#include <time.h>

int main()
{
    int y, z;


    printf("\nInforme o Y: ");
    scanf("%d%*c", &y);
    printf("\nInforme o comprimento: ");
    scanf("%d%*c", &z);

    while(y != 0)
    {
        for(int i=0; i < y; i++)
        {
            printf("\n");

            for(int x=0; x < (y * z) - (z - 1); x++)
            {
                if(x== z*i)
                {
                    printf("*");
                    delay(100);
                }
                else
                {
                    printf(" ");
                }
            }
        }

        for(int i=y; i >= 0; i--)
        {

            for(int x=0; x < (y * z) - (z - 1); x++)
            {
                if(x== z*i)
                {
                    printf("*");
                    delay(100);
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }

    }


    return 0;
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
