/*
A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:
- Efetue o cálculo da área, elevando o valor de Raio ao quadrado e multiplicando por π.
*/

#include <cstdio>

int
main(){

    const double n = 3.14159;
    double raio;
    
    scanf("%lf", &raio);
    printf("A=%.4lf\n", n * (raio * raio));

    return 0;
}