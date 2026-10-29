#include <math.h>

void menu(){
    system("cls");
    printf(".:: Programa de Cálculo Geométrico ::.\n\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("1 - Área da Esfera\n");
    printf("2 - Volume da Esfera\n");
    printf("3 - Área do Cilíndro Regular\n");
    printf("4 - Volume do Cilíndro Regular\n");
    printf("5 - Área do Cubo\n");
    printf("6 - Volume do Cubo\n");
    printf("7 - Área do Paralelepipedo\n");
    printf("8 - Volume do Paralelepipedo\n");
    printf("\nDigite a opção desejada: ");
}

// esfera
float areaEsfera(float raio){
    return 4 * M_PI * pow(raio, 2);
}

float volumeEsfera(float raio){
    return (4.0/3.0) * M_PI * pow(raio, 3);
}

// cilindro regular
float areaCilindroReg(float raio, float altura){
    return 2 * M_PI * pow(raio, 2) + 2 * M_PI * raio * altura;
}

float volumeCilindroReg(float raio, float altura){
    return M_PI * pow(raio, 2) * altura;
}

// cubo
float areaCubo(float lado){
    return 6 * pow(lado, 2);
}

float volumeCubo(float lado){
    return pow(lado, 3);
}

// paralelepipedo
float areaParalelepipedo(float largura, float comprimento, float altura){
    return 2 * (largura * comprimento + comprimento * altura + largura * altura);
}

float volumeParalelepipedo(float largura, float comprimento, float altura){
    return largura * comprimento * altura;
}