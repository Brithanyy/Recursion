#include <stdio.h>
#include <stdlib.h>
///PROTOTIPADO DE FUNCIONES:
void mostrarMenu();
int factorial(int x);
int potencia(int x, int expo);
void mostrarArray(int arr[], int validos, int pos);
void mostrarArrayInvertido(int arr[], int validos);
float promedioArreglo(int arr[], int validos, int pos);
int arrayCapicua(int arr[], int validos, int i, int j);
int sumarElementosArray(int arr[], int validos, int pos);
int buscarMenorArr(int arr[], int validos, int pos);
void mostrandoValoresChar();
int encontrarElementoDeterminadoArr(int arr[], int validos, int pos, int dato);
int contarMayoresArr(int arr[], int validos, int pos, int num);
int sumarDigitosNumero(int num);
int contarDigitosPares(int num);
int determinarSiUnNumeroEsPrimo(int numero, int divisor);
void invertirDigitos(int num);
int encontrarDatoBusquedaBinaria(int arr[],int posInicio,int posFinal,int dato);

int main()
{
   ///VARIABLES ANTES DEL SWICH:
    int x = 5;
    int resultado;
    int exponente = 3;
    int arreglo[] = {10,20,30,60,50,5,40,80,20,10};
    int validos = 10;
    int pos = 0;
    int posFinal = validos -1;
    float promedio;
    int flag;
    int dato;
    int divisor;

    int arreglo2[] = {1,2,3,4,5,6,7,10,15,18,25,26,30,56}; ///14
    int posInicial = 0;
    int validosArreglo2 = 14;
    int posiFinal = validosArreglo2 - 1;

    int salirMenu = 0;
    int eleccion;
    char continuar = 's';

    while(continuar == 's'){
        mostrarMenu(); ///Mostrando los ejercicios
        printf("\n");
        printf("Introduzca el numero correspondiente a cada ejercicio: ");
        fflush(stdin);
        scanf("%i", &eleccion);
        printf("\n");
///SWICH:
switch(eleccion){
        case 0:
            ///El case 0 esta para cuando queremos salir del menu.
        break;
        case 1:
            resultado = factorial(x);
            printf("\nEl factorial de %i es: %i \n", x, resultado);
        break;

        case 2:
            resultado = potencia(x, exponente);
            printf("\nLa potencia de %i a la %i es: %i \n", x,exponente, resultado);
        break;
        case 3:
            mostrarArray(arreglo,validos, pos);
            printf("\n");
        break;

        case 4:
            mostrarArrayInvertido(arreglo,validos);
            printf("\n");
        break;
        case 5:
            flag = arrayCapicua(arreglo,validos,pos,posFinal);
            if(flag == 0) printf("\nNo es capicua.\n");
            else printf("\nEs capicua.\n");
        break;

        case 6:
            resultado = sumarElementosArray(arreglo,validos,pos);
            printf("\nResultado = | %i | \n", resultado);
        break;
        case 7:
            resultado = buscarMenorArr(arreglo,validos,pos);
            printf("\nEl elemento menor es: %i \n", resultado);
        break;
        case 8:
            printf("Ingrese el numero para contar sus digitos: ");
            fflush(stdin);
            scanf("%i", &dato);
            resultado = sumarDigitosNumero(dato);
            printf("La suma de los digitos del numero %i es: %i", dato, resultado);
        break;
        case 9:
            printf("Ingrese el numero: ");
            fflush(stdin);
            scanf("%i", &dato);
            printf("\n");
            resultado = contarDigitosPares(dato);
            printf("Los digitos pares del numero %i son: %i", dato, resultado);
            printf("\n");

        break;
        case 10:
            promedio = promedioArreglo(arreglo,validos,pos);
            printf("\nEl promedio del arreglo es de: %.2f \n", promedio);
        break;

        case 11:
            mostrandoValoresChar();
        break;
        case 12:
            printf("\nIngrese el dato a buscar: ");
            fflush(stdin);
            scanf("%i", &dato);
            flag = encontrarElementoDeterminadoArr(arreglo,validos,pos, dato);
            if(flag == 1)printf("\nEl numero se encuentra en el arreglo\n");
            else printf("\nEl numero no se encuentra en el arreglo\n");
        break;
        case 13:
            printf("Ingrese el numero: ");
            fflush(stdin);
            scanf("%i", &dato);
            divisor = dato - 1;
            resultado = determinarSiUnNumeroEsPrimo(dato,divisor);
            if(resultado == 1) printf("\nEl numero %i es primo.\n", dato);
            else printf("\nEl numero %i no es primo.\n", dato);
        break;
        case 14:
            mostrarArray(arreglo,validos,pos);
            printf("\n\n");
            printf("Ingrese el numero: ");
            fflush(stdin);
            scanf("%i", &dato);
            resultado = contarMayoresArr(arreglo,validos,pos,dato);
            printf("Los numeros mayores al %i son: %i", dato,resultado);
        break;
        case 15:
            printf("Ingrese un numero: ");
            fflush(stdin);
            scanf("%i", &dato);
            invertirDigitos(dato);
        break;
        case 16:
            printf("Ingrese el numero a buscar: ");
            fflush(stdin);
            scanf("%i", &dato);
            resultado = encontrarDatoBusquedaBinaria(arreglo2,posInicial,posiFinal,dato);
            if(resultado == 1) printf("\nNumero Encontrado.\n");
            else printf("\nNumero No encontrado.\n");
        break;

        default:
        printf("\nNumero ingresado invalido\n");
        break;
        }

        printf("\nPulsa 0 si desea salir del menu: ");
        fflush(stdin);
        scanf("%i", &salirMenu);

        printf("\n\nPulsa 's' si desea seguir en el menu: ");
        fflush(stdin);
        scanf("%c", &continuar);

    }


}
///FUNCION DE MOSTRAR MENU:
void mostrarMenu(){
    printf("\n1) Calcular el factorial de un numero en forma recursiva.\n");
    printf("\n2) Calcular la potencia de un numero en forma recursiva.\n");
    printf("\n3) Recorrer un arreglo y mostrar sus elementos en forma recursiva. \n");
    printf("\n4) Recorrer un arreglo comenzando desde la posicion 0 y mostrar sus elementos en forma invertida (recursivo).\n");
    printf("\n5) Determinar en forma recursiva si un arreglo es capicua.\n");
    printf("\n6) Sumar en forma recursiva los elementos de un arreglo de enteros y retornar el total de la suma.\n");
    printf("\n7) Buscar el menor elemento de un arreglo en forma recursiva\n");
    printf("\n8) Funcion suma digitos, recibe un numero entero y me devuelva la suma de sus digitos\n");
    printf("\n9) Funcion que cuente digitos pares. Recibe un numero entero y devuelve cuantos numeros de esos digitos son pares\n");
    printf("\n10) Promedio de un arrglo\n");
    printf("\n11  Ingresar valores a una variable de tipo char (por teclado) y mostrarlo en el orden inverso (hasta ingresar un ‘*’) de forma recursiva. NO usar arreglos. \n");
    printf("\n12) Determinar si un arreglo contiene un determinado elemento de forma recursiva. (Pueden intentarlo tambien con una funcion void)(Tener en cuenta para un arreglo desordenado y el caso para un arreglo ordenado)\n");
    printf("\n13) Funcion es primo, recibe el numero y el divisor. Debe retornar si es primo o no el numero\n");
    printf("\n14) Funcion contar mayores. Recibe un arreglo, un numero para fijarnos cuantos numeros hay mayores a ese numero\n");
    printf("\n15) Funcion invertir digitos. Reciba un numero que invierta sus digitos\n");
    printf("\n16) Realizar una funcion que, dado un arreglo de enteros ordenado, busque un elemento en dicho arreglo (implementar metodo de busqueda binaria)\n");

}

///PUNTO 1:
int factorial(int x){
    int rta;
    if(x == 0)rta = 1;
    else rta = x * factorial(x-1);
    return rta;
}
///PUNTO 2:
int potencia(int x, int expo){
    int rta;
    if(expo == 0){
        rta = 1;
    }else{
    rta = x * potencia(x, --expo);
    printf("%i elevado a %i = %i\n", x, expo,rta);
    }
    return rta;
    printf("\n");
}
///PUNTO 3:
void mostrarArray(int arr[], int validos, int pos){
    if(pos <= validos -1){ /// Condicion de corte. Cuando ya no es mas pequeño pos que validos se corta
        printf("|%i| ", arr[pos]);
        mostrarArray(arr, validos, ++pos);
    }
}
///PUNTO 4:
void mostrarArrayInvertido(int arr[], int validos){
    if(validos -1 >= 0){
        printf("|%i| ", arr[validos - 1]);
        mostrarArrayInvertido(arr, --validos);
    }
}
///PUNTO 5: si el arreglo es capicua
int arrayCapicua(int arr[], int validos, int i, int j){ /// i posInicial = 0 j posFInal = validos
    int resultado;
    if(i > j) resultado = 1; ///ASUMIENDO Q ES CAPICUA
    else if (arr[i] != arr[j]) resultado = 0;
    else resultado = arrayCapicua(arr,validos,++i,--j);
    return resultado;
}
///PUNTO 6: sumar todos los indices de un arreglo y retornarlo
int sumarElementosArray(int arr[], int validos, int pos){
    int respuesta;
    if(pos == validos) respuesta = 0;
    else respuesta = arr[pos] + sumarElementosArray(arr,validos,++pos);
    return respuesta;
}
///PUNTO 7:
int buscarMenorArr(int arr[], int validos, int pos){
    int rta;
    int menor = arr[0];
    if(pos == validos) rta = 0;/// condicion de corte
    if(arr[pos] < menor) menor = arr[pos];
    else menor = buscarMenorArr(arr,validos,pos + 1);
    return menor;
}
///PUNTO 8: sumar los digitos de un numero
int sumarDigitosNumero(int num){
    int ultimoDigito;
    if(num == 0)return 0;
    else{
        ultimoDigito = num % 10;
        return ultimoDigito + sumarDigitosNumero(num / 10);
    }
}
///PUNTO 9: Contar digitos pares
int contarDigitosPares(int num){
    int ultimoDigito;
    int contador = 0;
    if(num == 0){return 0;
    }else{
        ultimoDigito = num % 10;
        if((ultimoDigito % 2) == 0)contador++;
        return contador += contarDigitosPares(num / 10);
    }
}
/// 10) Ejercicio de Adian Aroca: devolver el promedio de un arreglo
float promedioArreglo(int arr[], int validos, int pos){ /// pos = 0 validos = 10
    float resultado;
    if(pos >= validos) resultado = 0;
    else resultado = (float) arr[pos] / validos + promedioArreglo(arr,validos,++pos);
    return resultado;
}
///PUNTO 11:
void mostrandoValoresChar(){
    char letra;
    printf("Ingrese una letra: ");
    fflush(stdin);
    scanf("%c", &letra);
    if(letra == '*'){
    }else{
        mostrandoValoresChar(letra);
        printf("%c ", letra);
    }
}
///PUNTO 12:
int encontrarElementoDeterminadoArr(int arr[], int validos, int pos, int dato){
    if(pos == validos) return 0; ///condicion de corte
    if(arr[pos] == dato) return 1; /// 1 encontrado / 0 no encontrado
    else return encontrarElementoDeterminadoArr(arr,validos,++pos,dato);
}
///PUNTO 13: Determinar si un numero es primo
int determinarSiUnNumeroEsPrimo(int numero, int divisor){
    if(numero <= 1) return 0;///Sino es mayor a uno no es primo
    if(divisor == 1) return 1; ///Llegamos al final. Es primo (condicion de corte)
    if((numero % divisor) == 0) return 0; ///No es primo si es divisible por el divisor
    else determinarSiUnNumeroEsPrimo(numero,divisor - 1);
}

///PUNTO 14: Contar Mayores de un arreglo desde un numero pasado
int contarMayoresArr(int arr[], int validos, int pos, int num){
    int contador = 0;
    if(pos == validos) return 0;
    if(arr[pos] > num) contador++;
    contador += contarMayoresArr(arr, validos, pos + 1, num);
    return contador;
}
///PUNTO 15: funcion de invertir digitos
void invertirDigitos(int num){
    if(num == 0)return;
    printf("%i", num % 10);
    invertirDigitos(num / 10);
}

///PUNTO 16: CONSULTAR SI HACERLO O NO PORQUE YA TENGO EL PUNTO 12 QUE TAMBIEN SE TRATA DE ENCONTRAR UN ELEMENTO EN UN ARREGLO.
int encontrarDatoBusquedaBinaria(int arr[],int posInicio,int posFinal,int dato){
    int medio = (posInicio + posFinal) / 2;
    if(posInicio > posFinal) return 0;
    if(arr[medio] == dato) return 1;
    if(arr[medio] < dato) return encontrarDatoBusquedaBinaria(arr,++posInicio,posFinal,dato);
    else return encontrarDatoBusquedaBinaria(arr,posInicio,--posFinal,dato);
}
