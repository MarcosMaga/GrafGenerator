/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int heigth;
    int width;
    
    printf("Escreva a altura: ");
    scanf("%d", &width);
    printf("\nEscreva a largura: ");
    scanf("%d", &heigth);
    
    for(int x=0; x < width+1; x++)
    {
        if(x==0)
        {
            for(int i=0; i < heigth; i++)
            {
                printf("X");
            }
        }
        else if(x == width-1)
        {
   
            for(int y=0; y < heigth; y++)
            {
                printf("X");
            }
        }
        else if(x < width && x > 0)
        {
              for(int z=0; z < heigth; z++)
            {
                if(z==0)
                {
                    printf("X");
                }
                else if(z == heigth-1)
                {
                    printf("X");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        
        printf("\n");
    }

    

    return 0;
}
