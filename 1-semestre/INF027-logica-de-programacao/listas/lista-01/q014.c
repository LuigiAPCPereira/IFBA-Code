#include <stdio.h>

/*
    QUESTÃO 14
    Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre
    (fica verde), os veículos que nele estavam parados tendem a encontrar os próximos
    semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam
    abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre
    eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade
    permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para
    percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir
    um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um
    algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes
    informações:
    a. a distância desde o semáforo anterior
    b. a velocidade permitida da via
    c. a aceleração típica dos carros

*/

int main() {
    
    float distancia, velocidade, aceleracao, tempoAceleracao, tempoRestante, tempoSemaforo, distanciaAceleracao;
    
    printf("[Sincronizador de semáforo] Digite a distância entre os semaforos: ");
    scanf("%f", &distancia);
    printf("[Sincronizador de semáforo] Digite a velocidade em KM/h: ");
    scanf("%f", &velocidade);
    printf("[Sincronizador de semáforo] Digite a aceleracao em m/s2: ");
    scanf("%f", &aceleracao);

    velocidade = velocidade / 3.6; // Converter KM/h em M/s
    
    tempoAceleracao = velocidade / aceleracao;
    distanciaAceleracao = velocidade * tempoAceleracao / 2;
    tempoRestante = (distancia - distanciaAceleracao) / velocidade;
    tempoSemaforo = tempoAceleracao + tempoRestante - 3;
    
    printf("[Sincronizador de semáforo] o proximo semáforo deve abrir em %.2f segundos\n", tempoSemaforo);
    
}
