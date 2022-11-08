#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

FILE *arq1;
FILE *arq2;

main()
{
    char new_names[100];
    arq1 = (fopen("Nomes.txt", "a+b"));
    if (arq1 == NULL){
        printf("Problema na arbertura do arquivo\n");
    }
    char decisao[5];
    printf("Pressione ENTER para comecar");
        scanf("%c", &decisao);

    do
    {
        char pula_linha = '\n';
        fprintf(arq1, "%c", pula_linha);//função que armazena o nome/string no arquivo txt

        printf("Digite o nome:\n");
            scanf("%s", &new_names);
        printf("\nDigite \'sair\' para finalizar a acao:\n");
            
            gets(decisao);
        fprintf(arq1, "%s", new_names);//função que armazena o nome/string no arquivo txt
        system("pause");
    } while (strcmp(decisao,"sair"));
    
    fclose(arq1);
//arq2 = fopen("new_names.txt", "a+b");
}