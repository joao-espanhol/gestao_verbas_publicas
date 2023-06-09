#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu_inicial();
void menu_01();
void menu_02();
void menu_03();
void menu_04();
void cabecalho();

void main() {

    setlocale(LC_ALL, "Portuguese");


    int codigo = 1;
    while(codigo != 0){

        codigo = menu_inicial();

        switch(codigo){
            case 1:
                menu_01();
                break;
            case 2:
                 menu_02();
                 break;
            case 3:
                menu_03();
                break;
            case 4:
                menu_04();
                break;
            case 0:
                break;
            default:
                printf("Escreva uma opção válida");
        }
    }

return;
}

int menu_inicial(){
    int codigo;
    cabecalho();
    printf ("Bem-vindo(a)! Escolha uma das opções abaixo para prosseguir:\n");
    printf ("1 - Lançar gastos\n");
    printf ("2 - Lançar Verba Recebida\n");
    printf ("3 - Consulta de Gastos Mensais\n");
    printf ("4 – Exportar Relatório de Prestação de Contas\n");
    printf ("0 - Sair\n");
    printf("Codigo: ");
    scanf ("%i", &codigo);

    system("cls");
    cabecalho();

    return (codigo);
}

void menu_01(){
    //Funcao para lancar gastos no BD

    int categoria, documento, dia, mes, ano;
    float valor;
    char descricao[100], favorecido[50];

    printf ("Insira as informacoes solicitadas abaixo: \n");
    printf ("Categoria:\n");
    printf ("1 – RH\n");
    printf ("2 – Encargos Sociais\n");
    printf ("3 – Fundo Reserva\n");
    printf ("4 - Alimentação\n");
    printf ("5 – Material Pedagógico\n");
    printf ("6 – Concessionária\n");
    printf ("7 – Oficineiro\n");
    printf ("8 – Outras Despesas\n");
    scanf("%i", &categoria);
    system("cls");
    cabecalho();
    //Funcao de escrever no BD aqui

    printf ("Data do Documento (DD/MM/AAAA)\n");
    scanf("%d/%d/%d", &dia,&mes,&ano);
    system("cls");
    cabecalho();
    //Funcao de escrever no BD aqui
    printf ("Número do Documento \n ");
    scanf("%i", &documento);
    system("cls");
    cabecalho();
    //Funcao de escrever no BD aqui
    printf ("Descrição \n ");
    scanf("%s", descricao);
    system("cls");
    cabecalho();
    //Funcao de escrever no BD aqui
    printf ("Nome do Favorecido \n");
    scanf("%s", favorecido);
    system("cls");
    cabecalho();
    //Funcao de escrever no BD aqui
    printf ("Valor\nR$");
    scanf("%f", &valor);
    system("cls");
    //Funcao de escrever no BD aqui

    return;
}

void menu_02(){
    // Funcao para lancar verbas recebidas ou consultar verbas
    int opcao2, valor2, verba, verba_gasta, proxima_verba, dia1, mes1, ano1;
    char descricao2[100];
    int sair = 1;

    printf("Escolha uma das opcoes: \n");
    printf("1 - Lançar Verba Recebida\n");
    printf("2 – Consultar Limite de Verba\n");
    scanf("%i", &opcao2);
    system("cls");
    cabecalho();

    switch(opcao2){

        case 1:
            //Lanca a verba no BD
            printf("Data do Recebimento (DD/MM/AAAA)\n");
            scanf("%d/%d/%d", &dia1,&mes1,&ano1);
            system("cls");
            cabecalho();
            //Funcao de escrever no BD aqui
            printf("Descrição\n");
            scanf("%s", descricao2);
            system("cls");
            cabecalho();
            //Funcao de escrever no BD aqui
            printf("Valor\nR$");
            scanf("%i", &valor2);
            system("cls");
            //Funcao de escrever no BD aqui
            break;
        case 2:
            //Funcao para verificar o saldo disponivel
            while(sair != 0){
                printf("Verba Disponível %i \n", verba);
                printf("Porcentagem de Verba Gasta %i \n", verba_gasta);
                printf("Tempo até a próxima verba %i \n", proxima_verba);
                printf("\nPara sair, digite 0\n");
                scanf("%i", &sair);
                system("cls");
            }
            break;
        default:
            printf("Digite um codigo valido");
    }
return;
}

void menu_03(){
    // Verifica a verba disponivel por categoria
    int gasto_rh, disponivel_rh, gasto_esociais, disponivel_esociais, gasto_fundo, disponivel_fundo,
    gasto_alimentacao, disponivel_alimentacao, gasto_pedagogico, disponivel_pedagogico, gasto_concessionaria,
    disponivel_concessionaria, gasto_oficineiro, disponivel_oficineiro, gasto_outros, disponivel_outros;
    int sair = 1;

    while(sair != 0){
        printf("Gastos Mensais por Categoria:") ;
        printf("\n1 – RH ------------------------------------------ Valor Gasto:", gasto_rh,
               "Valor Disponível: \n",disponivel_rh);
        printf("\n2 – Encargos Sociais ------------------------ Valor Gasto:", gasto_esociais,
               "Valor Disponível: \n", disponivel_esociais);
        printf("\n3 – Fundo Reserva -------------------------- Valor Gasto:", gasto_fundo,
               "Valor Disponível:\n", disponivel_fundo);
        printf("\n4 - Alimentação ----------------------------- Valor Gasto:", gasto_alimentacao,
               "Valor Disponível:\n", disponivel_alimentacao);
        printf("\n5 – Material Pedagógico ------------------ Valor Gasto:", gasto_pedagogico,
               "Valor Disponível:\n", disponivel_pedagogico);
        printf("\n6 – Concessionária ------------------------- Valor Gasto:",gasto_concessionaria,
               "Valor Disponível:\n", disponivel_concessionaria);
        printf("\n7 – Oficineiro -------------------------------- Valor Gasto:", gasto_oficineiro,
               "Valor Disponível:\n", disponivel_oficineiro);
        printf("\n8 – Outras Despesas ----------------------- Valor Gasto:", gasto_outros,
               "Valor Disponível:\n", disponivel_outros);
        printf("\nPara sair, digite 0\n");
        scanf("%i", &sair);
        system("cls");
    }
    system("cls");
return;
}

void menu_04(){
    //Exporta relatorio do periodo
    int dia_de, mes_de, ano_de, dia_ate, mes_ate, ano_ate;

    printf("Exportar relatório para prestação de contas, selecione o período de tempo que deseja consultar:\n");

    printf("De: DD/MM/AAAA\n");
    scanf("%d/%d/%d", &dia_de,&mes_de,&ano_de);
    printf("Até: DD/MM/AAAA\n");
    scanf("%d/%d/%d", &dia_ate,&mes_ate,&ano_ate);

return;
}

void cabecalho(){
    //Cabecalho do Sistema
    printf("************************************");
    printf("\nSISTEMA DE GESTAO DE VERBAS PUBLICAS");
    printf("\n************************************\n");
return;
}
