#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    time_t segundos;
    int minuto, segundo, atualM, anteriorM, atualS, anteriorS;
    segundos = time(NULL);

    minuto = segundos/60;
    pomodoroM = minuto-25;
    segundo = (segundos%3600)%60;
    pomodoroS = segundo
    atualM = minuto;
    anteriorM = minuto;
    atualS = segundo;
    atualS = segundo;


    while (minuto<25){
        if(atualM==anteriorM){
            segundos = time(NULL);

            minuto = (segundos/60) - pomodoro;
            segundo = (segundos%3600)%60;
            atualM = minuto;
        }else{
            printf("%d min %d sec\n\n", minuto, segundo);
            anteriorM = atualM;
        }
        if(atualS==anteriorS){
            segundos = time(NULL);
            hora = segundos/3600;
            minuto = (segundos%3600)/60;
            segundo = (segundos%3600)%60;
            atualS = segundo;
        }else{
            printf("%d min %d sec\n\n", minuto, segundo);
            anteriorS = atualS;
        }
    }


    printf("%d horas, %d minutos, %d segundos", hora, minuto, segundo);

    /*struct tm*/

    system("pause");
    return 0;
}
