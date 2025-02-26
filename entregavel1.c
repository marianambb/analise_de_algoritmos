#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// O programa serve para reforçar funcionalidades básicas na Linguagem C

//Prototipagem das funções
void menu();
void criar_conta();
void juros_simples();
void limites();
void motivacao();
void sair();

int main() {
    menu();
    return 0;
}
// O usuário insere o primeiro nome e um nome de usuário.
    void criar_conta() {
        char nome[50];
        char usuario[20];
        printf("Olá!\n");
        printf("Digite seu primeiro nome: \n");
        scanf("%s", nome);
        printf("Digite um nome de usuário\n");
        scanf("%s", usuario);
        printf("Seja bem vindo(a), %s!\n", nome);
    }

//A função calcula juros simples com entradas do usuário
void juros_simples() {
    double capital;
    float taxa;
    double juros;
    int tempo;

    printf("Entre com o capital inicial: \n");
    scanf("%lf", &capital);
    printf("Entre com o tempo em meses:\n");
    scanf("%d", &tempo);
    printf("Entre com a taxa: ");
    scanf("%f", &taxa);
    double i = taxa/100;

    juros = capital * i * tempo;
    printf("Os juros total é de: %f", juros);
}

//A função realiza operação com juros compostos com entradas do usuário
void juros_compostos() {
    double capital;
    float taxa;
    double juros;
    int tempo;
    double montante;

    printf("Entre com o capital inicial: \n");
    scanf("%lf", &capital);
    printf("Entre com o tempo em meses:\n");
    scanf("%d", &tempo);
    printf("Entre com a taxa: ");
    scanf("%f", &taxa);
    double i = taxa/100;

    montante = capital * pow((1+i),tempo);

    printf("O montante é de: %f", montante);
}

void limites() {
    printf("A quantidade mínima de parcelas é igual a 60 meses!\n");
    printf("A quantidade máxima de parcelas é igual a 420 meses!\n");
    
}

void motivacao() {
    printf("Lembre-se é melhor pagar os boletos do que ter o nome no Serasa! <3\n");

}
// O usuário deve inserir o caractere "x" para sair do programa. 
/* void sair() {
    char escolha;
    escolha = getchar();
    printf("Digite 'x' ou 'X' mais uma vez para confirmar..\n");
    scanf("%c", &escolha);

    if (escolha == 'x' || escolha == 'X') {
        printf("Saindo do programa...\n");
        exit(0);
    } else {
        printf("Voltando ao menu...\n");
    }
} */

void sair() {
    exit(0);
}

void menu() {
    while(1) { // O while serve para continuar a oferecer opções, até que o usuário saia.
    char escolha;
    printf("\nBem vindo(a)!\n");
    printf("Escolha uma opção (de 1 a 5) para continuar:\n\n");
    printf("Tecle 1: para criar conta\n");
    printf("Tecle 2: para calcular juros simples\n");
    printf("Tecle 3: para calcular juros compostos\n");
    printf("Tecle 4: ver limites de tempo para financiamento\n");
    printf("Tecle 5: para visualizar mensagem motivacional\n");
    printf("Tecle x: para sair do programa\n");

    scanf(" %c", &escolha);
    switch(escolha) {
        case '1':
        criar_conta();
        break;
        case '2':
        juros_simples();
        break;
        case '3':
        juros_compostos();
        break;
        case '4':
        limites();
        break;
        case '5':
        motivacao();
        break;
        case 'x':
        case 'X':
        sair();
        break;
        default:
        printf("Erro!\n");
        printf("Tente novamente!\n");

    }
}

} 
