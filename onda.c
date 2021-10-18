#include <stdio.h>

int main()
{
    int x, y, v;
    printf("Digite a repeticao: ");
    scanf("%d%*c", &x);
    printf("\nDigite o valor Y: ");
    scanf("%d%*c", &y);
    printf("\nDigite a distancia da onda: ");
    scanf("%d%*c", &v);
    printf("Gerando...\n");
    
    for(int i=0; i < y; i++)
    {
        printf("\n");
        
        for(int b=0; b < x; b++)
        {
            for(int w=0; w < i; w++)
            {
                for(int z=0; z < v; z++)
                {
                    printf(" ");
                }
            }
            
            printf("*");

            for(int n=0; n < ((2*v*(y-1)+1)-2) - (2*v) *i; n++)
            {
                printf(" ");
            }
        
            if(i != y-1)
            {
                printf("*");
            }
            
            for(int w=0; w < i; w++)
            {
                for(int z=0; z < v; z++)
                {
                    printf(" ");
                }
            }
        }
    }

    printf("\nDesenho gerado!");
    return 0;
}
