#include <iostream> 

using namespace std; 

// Funci�n para verificar si un n�mero es par o impar
bool esPar(int num) {
    return num %  2 ==  0; // Retorna verdadero si el n�mero es par o falso si es impar
}

// Funci�n para sumar n�meros pares o impares
int sumaNumeros(int num, bool sumarPares) {
    int suma =  0; // Inicializa la variable suma en  0
    for (int i =  1; i <= num; ++i) { // Bucle que recorre desde  1 hasta el n�mero ingresado
        if ((sumarPares && esPar(i)) || (!sumarPares && !esPar(i))) { // Si sumarPares es verdadero y el n�mero es par, o si sumarPares es falso y el n�mero es impar
            suma += i; // Suma el n�mero al total
        }
    }
    return suma; // Retorna la suma total
}

// Funci�n para calcular el factorial de un n�mero
int factorial(int num) {
    int resultado =  1; // Inicializa el resultado en  1
    while (num >  1) { // Mientras num sea mayor que  1
        resultado *= num; // Multiplica el resultado por num
        num--; // Decrementa (disminuci�n) num
    }
    return resultado; // Retorna el resultado
}

// Funci�n para contar la cantidad de d�gitos en un n�mero
int contarDigitos(int num) {
    int contador =  0; // Inicializa el contador en  0
    do { // Bucle do while
        contador++; // Incrementa el contador
        num /=  10; // Divide num por  10 para eliminar el �ltimo d�gito
    } while (num !=  0); // Contin�a mientras num no sea  0
    return contador; // Retorna el contador
}

// Funci�n para ordenar tres n�meros en orden ascendente
void ordenarNumeros(int &a, int &b, int &c) {
    if (a > b) { // Si a es mayor que b
        int temp = a; // Guarda el valor de a en temp
        a = b; // Asigna el valor de b a a
        b = temp; // Asigna el valor guardado en temp a b
    }
    if (b > c) { // Si b es mayor que c
        int temp = b; // Guarda el valor de b en temp
        b = c; // Asigna el valor de c a b
        c = temp; // Asigna el valor guardado en temp a c
    }
    if (a > b) { // Si a es mayor que b despu�s de la primera comparaci�n
        int temp = a; // Guarda el valor de a en temp
        a = b; // Asigna el valor de b a a
        b = temp; // Asigna el valor guardado en temp a b
    }
}

// Funci�n para sumar los d�gitos de un n�mero
int sumaDigitos(int num) {
    int suma =  0; // Inicializa la suma en  0
    while (num !=  0) { // Mientras num no sea  0
        suma += num %  10; // Suma el �ltimo d�gito de num a la suma
        num /=  10; // Elimina el �ltimo d�gito de num
    }
    return suma; // Retorna la suma de los d�gitos
}

int main() { // Funci�n principal del programa
    system("color  8e"); 
    char respuesta; 
    do { // Bucle do while para repetir el programa
        int num1, num2, num3; // Variables para almacenar los n�meros ingresados 
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << "Ingrese el tercer numero: ";
        cin >> num3;
        
        system("cls"); // Limpia la pantalla
        cout << "Suma de numeros pares hasta " << num1 << ": " << sumaNumeros(num1, true) << endl; // Imprime la suma de los n�meros pares hasta num1
        cout << "Suma de numeros impares hasta " << num3 << ": " << sumaNumeros(num3, false) << endl; // Imprime la suma de los n�meros impares hasta num3
        cout << "Factorial de " << num2 << ": " << factorial(num2) << endl; // Imprime el factorial de num2
        cout << "Cantidad de digitos en " << num1 << ": " << contarDigitos(num1) << endl; // Imprime la cantidad de d�gitos en num1
        
        ordenarNumeros(num1, num2, num3); // Ordena los n�meros num1, num2 y num3 en orden ascendente
        cout << "Numeros ordenados: " << num1 << ", " << num2 << ", " << num3 << endl; // Imprime los n�meros ordenados
        
        cout << "Suma de digitos de " << num3 << ": " << sumaDigitos(num3) << endl; // Imprime la suma de los d�gitos de num3
        
        system("pause"); 
        system("cls");
        cout << "Desea volver a iniciar el programa? (s/n): " << endl; // Pregunta al usuario si desea volver a iniciar el programa
        cin >> respuesta; 
    } while (respuesta == 's' || respuesta == 'S'); 

    return  0; 
}
