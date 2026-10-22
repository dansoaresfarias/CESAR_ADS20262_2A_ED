void menu(){
    system("cls");
    printf(".:: Programa de Conversão de Temperatura ::.\n\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("3 - Celsius para Kelvin\n");
    printf("4 - Kelvin para Celsius\n");
    printf("5 - Fahrenheit para Kelvin\n");
    printf("6 - Kelvin para Fahrenheit\n");
    printf("\nDigite a opção desejada: ");
}

float celsiusParaFahrenheit(float tempC){
    return tempC * 9.0/5.0 + 32.0;
}

float fahrenheitParaCelsius(float tempF){
    return (tempF - 32.0) * 5.0/9.0;
}

float celsiusParaKelvin(float tempC){
    return tempC + 273.15;
}

float kelvinParaCelsius(float tempK){
    return tempK - 273.15;
}

float fahrenheitParaKelvin(float tempF){
    return (tempF - 32.0) * 5.0/9.0 + 273.15;
}

float kelvinParaFahrenheit(float tempK){
    return (tempK - 273.15) * 9.0/5.0 + 32.0;
}