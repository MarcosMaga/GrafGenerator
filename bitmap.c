#include <stdio.h>

int main()
{
    char f,c;
    
    printf("Insira um caracter para imagem: ");
    scanf("%c", &c);
    getchar();
    printf("\nInsira uma caracter para o fundo: ");
    scanf("%c", &f);
    getchar();
    printf("Gerando...\n");
    
    int matriz[13][26] = {
        {0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0},
        {0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,0,1,1,1,1,0,0},
        {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1},
        {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
        {0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
        {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
    };
    
    printf("\n");
    
    for(int y=0; y < 13; y++)
    {
        for(int x=0; x < 26; x++)
        {
            if(matriz[y][x] == 1)
            {
                printf("%c", c);
            }
            else
            {
                printf("%c", f);
            }
        }
        printf("\n");
    }
                         
    printf("\nBitmap matricial gerado com sucesso!");
    

    return 0;
}
