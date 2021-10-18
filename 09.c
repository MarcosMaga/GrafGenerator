#include <stdio.h>

int main()
{
    float tamanho;
    printf("Escolha um numero impar: ");
    scanf("%f", &tamanho);
    
    float m = (tamanho / 2) + 0.5f;
    
    
    
    for(int i=0; i < m; i++)
    {
        for(int x=0; x <= tamanho; x++)
        {
            if(x == (((tamanho/2) + 0.5f) - 1) - i)
            {
                for(int y=0; y<=i; y++)
                {
                    if(y==0)
                    {
                        printf("X");
                    }
                    else
                    {
                        printf("X");
                        printf("X");
                    }
                }
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    for(int i=0; i < 2; i++)
    {
        for(int x=0; x < tamanho; x++)
        {
            if(x==m-2)
            {
                printf("XX");
            }
            else
            {
                printf(" ");    
            }
        }
        printf("\n");
    }
    
    for(int i=0; i < tamanho; i++)
    {
        if(i==m-3)
        {
            printf("XXXX");
        }
        else
        {
            printf(" ");
        }
    }
 return 0;
}
