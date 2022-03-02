#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){

    /*-----------------VARI�VEIS----------------*/

    time_t totalSegundos;/*cria variavel que resgata o valor de tempo*/
    int segundo,  /*segundo recebe a vari�vel totalSegundos para podermos manipular de maneira mais tranquila */
    atualS, /*serve para termos o controle na hora de imprimir o tempo, para que um novo hor�rio seja apresentado apenas quando atualizar */
    anteriorS, /*serve de par�metro para a vari�vel anterior*/
    diferenca, /*serve para que possamos apresentar um contador que come�a em 0*/
    m, /*imprime os minutos */
    s, /*imprime os segundos*/
    pomodoroS, /*serve para sabermos onde a contagem come�ou*/
    i;/*serve para repetir o alarme*/
    setlocale (LC_ALL, "Portuguese_Brazil");    /*deixa os textos compat�veis com a l�ngua portuguesa*/
    int gerenciador, verificador; /*gerencia o switch e verifica se o dado informado � uma o��o v�lida*/

    /*--------------Apresenta��o do Pomodoro---------------*/

    printf("\n\n\n\nBem-vinde ao POMODORO SYSTEM\n\nSelecione o que voc� deseja:");
    printf("\n 1. Bloco de estudos - 25 minutos");
    printf("\n 2. Pausa curta         - 5   minutos");
    printf("\n 3. Pausa longa         - 30 minutos");
    printf("\n 0. Sair");
    fflush(stdin);
    verificador = scanf(" %d", &gerenciador);
    while(verificador == 0&&(0<=gerenciador<4)){
        system("clear||cls");
        printf("\n\n\n\nDigite uma op��o v�lida:");
        printf("\n 1. Bloco de estudos - 25 minutos");
        printf("\n 2. Pausa curta         - 5   minutos");
        printf("\n 3. Pausa longa         - 30 minutos");
        printf("\n 0. Sair");
        fflush(stdin);
        verificador = scanf(" %d", &gerenciador);
    }
    do{
            switch (gerenciador){
                    case 1:
                            system("clear||cls");




                            printf("\n\n\nTerminou a contagem!!!");

                            printf("\n\n\nSelecione o que voc� deseja:");
                            printf("\n 1. Bloco de estudos - 25 minutos");
                            printf("\n 2. Pausa curta         - 5   minutos");
                            printf("\n 3. Pausa longa         - 30 minutos");
                            printf("\n 0. Sair");
                            fflush(stdin);
                            verificador = scanf(" %d", &gerenciador);
                            while(verificador == 0&&(0<=gerenciador<4)){
                                system("clear||cls");
                                printf("\n\n\n\nDigite uma op��o v�lida:");
                                printf("\n 1. Bloco de estudos - 25 minutos");
                                printf("\n 2. Pausa curta         - 5   minutos");
                                printf("\n 3. Pausa longa         - 30 minutos");
                                printf("\n 0. Sair");
                                fflush(stdin);
                                verificador = scanf(" %d", &gerenciador);
                            }
                            break;
                    case 2:
                            system("clear||cls");




                            printf("\n\n\nTerminou a contagem!!!");

                            printf("\n\n\nSelecione o que voc� deseja:");
                            printf("\n 1. Bloco de estudos - 25 minutos");
                            printf("\n 2. Pausa curta         - 5   minutos");
                            printf("\n 3. Pausa longa         - 30 minutos");
                            printf("\n 0. Sair");
                            fflush(stdin);
                            verificador = scanf(" %d", &gerenciador);
                            while(verificador == 0&&(0<=gerenciador<4)){
                                system("clear||cls");
                                printf("\n\n\n\nDigite uma op��o v�lida:");
                                printf("\n 1. Bloco de estudos - 25 minutos");
                                printf("\n 2. Pausa curta         - 5   minutos");
                                printf("\n 3. Pausa longa         - 30 minutos");
                                printf("\n 0. Sair");
                                fflush(stdin);
                                verificador = scanf(" %d", &gerenciador);
                            }
                            break;
                    case 3:
                            system("clear||cls");




                            printf("\n\n\nTerminou a contagem!!!");

                            printf("\n\n\nSelecione o que voc� deseja:");
                            printf("\n 1. Bloco de estudos - 25 minutos");
                            printf("\n 2. Pausa curta         - 5   minutos");
                            printf("\n 3. Pausa longa         - 30 minutos");
                            printf("\n 0. Sair");
                            fflush(stdin);
                            verificador = scanf(" %d", &gerenciador);
                            while(verificador == 0&&(0<=gerenciador<4)){
                                system("clear||cls");
                                printf("\n\n\n\nDigite uma op��o v�lida:");
                                printf("\n 1. Bloco de estudos - 25 minutos");
                                printf("\n 2. Pausa curta         - 5   minutos");
                                printf("\n 3. Pausa longa         - 30 minutos");
                                printf("\n 0. Sair");
                                fflush(stdin);
                                verificador = scanf(" %d", &gerenciador);
                            }
                            break;
                    case 0:
                            gerenciador = 0;
                            break;
                    default:
                        system("clear||cls");
                        printf("ERRO - selecione uma op��o v�lida!!!");
                        printf("\n 1. Bloco de estudos - 25 minutos");
                        printf("\n 2. Pausa curta         - 5   minutos");
                        printf("\n 3. Pausa longa         - 30 minutos");
                        printf("\n 0. Sair");
                        fflush(stdin);
                        verificador = scanf(" %d", &gerenciador);
                        while(verificador == 0&&(0<=gerenciador<4)){
                            system("clear||cls");
                            printf("\n\n\n\nDigite uma op��o v�lida:");
                            printf("\n 1. Bloco de estudos - 25 minutos");
                            printf("\n 2. Pausa curta         - 5   minutos");
                            printf("\n 3. Pausa longa         - 30 minutos");
                            printf("\n 0. Sair");
                            fflush(stdin);
                            verificador = scanf(" %d", &gerenciador);
                        }
                        break;
            }
    }while(gerenciador!=0);

    printf("\n\n\nObrigado por usar o Pomodoro System!!!");
    printf("\nEsse c�digo est� liberado para reprodu��o e melhoramento APENAS para fins educacionais.");
    printf("\nA comercializa��o � PROIBIDA.");
    printf("\nAutor: Wemmerson Albuquerque.");
    printf("\nContato: wemmerson.albuquerque@gmail.com");

    /*-------------------PREPARA��O-------------------*/

    totalSegundos = time(NULL); /*a fun��o time(NULL) resgata quantos segundos se passaram desde as 0 horas e 0 minutos do dia 1� de Janeiro de 1970, portanto tempos uma fonte confi�vel de passagem de tempo*/
    segundo = totalSegundos;
    pomodoroS = totalSegundos;/*ser� nossa �ncora de compara��o*/
    diferenca = segundo - pomodoroS;/*baseia nossos c�lculos para apresentar o contador*/
    atualS = segundo; /*necess�rio palra no primeiro segundo n�o repetir v�rias vezes o primeiro hor�rio apresentado*/
    anteriorS = segundo;
    m=0;/*serve para o contador come�ar zerado*/
    s=0;


    /*----------ALGOR�TMO DE PASSAGEM DO TEMPO-----------*/

    while (diferenca<10){/*colocar no lugar do 120 a quantidade de segundos que deseja que o contador termine a contagem*/
        if(atualS==anteriorS){/*faz de fato a detec��o da passagem de tempo de forma a n�o poluir o console*/
            totalSegundos = time(NULL);
            segundo = totalSegundos;
            diferenca = segundo - pomodoroS;
            atualS = segundo;/*atualiza nosso filtro de passagem do tempo*/
        }else{
            system("clear||cls");/*serve para limpar o console a cada segundo que se passa, apresentando sempre o momento atual da contagem*/
            m = diferenca/60;/*calcula quantos minutos se passaram desde o in�cio da contagem*/
            s = diferenca%60;
            printf("%d min %d sec\n\n", m, s);
            anteriorS = atualS;/*atualiza nosso filtro de passagem do tempo*/
        }
    }
    for(i=0;i<2;i++){
        PlaySound(TEXT("SHAKEN_B.wav"), NULL, SND_SYNC);
     }
    printf("\n\nTerminou a contagem!\n\n");
    system("pause");
    return 0;

}

