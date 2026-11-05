#define PI 3.14159265358979323846
#define POW2(n) ((n) * (n))
#define POW3(n) ((n) * (n) * (n))
#define AREA_ESFERA(raio) (4 * PI * POW2(raio))
#define VOLUME_ESFERA(raio) ((4.0/3.0) * PI * POW3(raio))
#define AREA_CILINDRO_REG(raio, altura) (2 * PI * POW2(raio) + 2 * PI * raio * altura)
#define VOLUME_CILINDRO_REG(raio, altura) (PI * POW2(raio) * altura)
#define AREA_CUBO(lado) (6 * POW2(lado))
#define VOLUME_CUBO(lado) (POW3(lado))
#define AREA_PARALELEPIPEDO(largura, comprimento, altura) (2 * (largura * comprimento + comprimento * altura + largura * altura))
#define VOLUME_PARALELEPIPEDO(largura, comprimento, altura) (largura * comprimento * altura)

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